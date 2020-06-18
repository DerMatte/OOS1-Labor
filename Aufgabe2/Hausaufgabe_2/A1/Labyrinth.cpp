#include "Labyrinth.hpp"


Labyrinth::Labyrinth() {
	muenzen = 0;
	labZeilen = kZeilen;
	labSpalten = kSpalten;
	labAnzGeister = kAnzGeister;
	Labyrinth::initialisieren();
}

void Labyrinth::initialisieren() {

	for (string Zeile : lab) {

		for (int i = 0; i < kSpalten; i++) {
			Zeile[i] = MAUER;
		}

		Zeile[kSpalten + 1] = NL;
		Zeile[kSpalten + 2] = EOS;

	}

}

void Labyrinth::drucken() {

	for (auto Zeilen : lab)
		cout << Zeilen;

}

void Labyrinth::erzeugen() {
	char c = 'x';
	int posx = kSpalten / 2;
	int posy = kZeilen / 2;
	lab[posy][posx] = ICH;
	drucken();
	while (c != 'q') {
		drucken();
		cout << "Laufen mit Pfeiltasten. Beenden mit q." << endl;
		lab[posy][posx] = WEG;
		c = _getch();
		switch (int(c)) {
			// oben
		case 72: posy = max(1, posy - 1); break;
			// links
		case 75: posx = max(1, posx - 1); break;
			// rechts
		case 77: posx = min(kSpalten - 2, posx + 1); break;
			// unten
		case 80: posy = min(kZeilen - 2, posy + 1); break;
			// q = quit
		case 113: break;
		}
		lab[posy][posx] = ICH;
	}
}

int Labyrinth::getZeilen() {

	return labZeilen;

}

int Labyrinth::getSpalten() {

	return labSpalten;

}

int Labyrinth::getAnzGeister() {

	return labAnzGeister;

}

int Labyrinth::getMuenzen() {

	return muenzen;

}

void Labyrinth::legeMuenzen() {

	for (string zeile : lab) {
		for (char stelle : zeile) {
			if (stelle == WEG) {
				stelle = MUENZE;
				muenzen++;
			}
		}
	}

}

void Labyrinth::(char c, Position pos) {

	lab[pos.posy][pos.posx] = c;

}

void Labyrinth::zeichneChar(char c, Position posalt, Position posneu) {

	lab[posneu.posy][posneu.posx] = c;
	lab[posalt.posy][posalt.posx] = WEG;

}

char Labyrinth::getZeichenAnPos(Position pos) {

	return lab[pos.posy][pos.posx];

}

bool Labyrinth::istMuenzeAnPos(Position pos) {

	if (lab[pos.posy][pos.posx] == MUENZE)
		return true;
	else
		return false;

}

void Labyrinth::exportDatei(char* dateiname) {
	ofstream datei(dateiname);
	if (!datei) {
		cerr << "Kann Datei nicht oeffnen" << endl;
	}
	for (int i = 0; i < kZeilen; i++) {
		datei << lab[i];
	}
	datei.close();
}

void Labyrinth::importDatei(char* dateiname) {
	ifstream datei(dateiname);
	if (!datei) {
		cerr << "Kann Datei nicht oeffnen" << endl;
	}
	for (int i = 0; i < kZeilen; i++) {
		datei.getline(lab[i], kSpalten + 2);
		lab[i][kSpalten] = NL;
		lab[i][kSpalten + 1] = EOS;
	}
	datei.close();
}

