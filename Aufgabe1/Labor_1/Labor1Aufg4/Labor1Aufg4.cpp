/*

Spiel Tsching, Tschang, Tschong

Regeln:
Es gibt zwei Spieler: der Programmierer und der Computer.
Beide Spieler waehlen gleichzeitig eines der drei Objekte
Stein, Schere und Papier. Beide können das gleiche Objekt wählen.
Der Spieler, der das mächtigere Objekt gewählt hat gewinnt.
SCHERE kann einen STEIN nicht zerschneiden, d.h. STEIN ist
mächtiger als SCHERE. PAPIER wickelt STEIN ein, d.h. PAPIER ist
mächtiger als STEIN. SCHERE zerschneidet PAPIER, d. h. SCHERE
ist maechtiger als PAPIER

*/

#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
using namespace std;

// Aufzählungstyp für Stein etc.
enum objectType { STEIN, SCHERE, PAPIER };

// Struktur für einen Spieler bestehend aus Name und Wahl 
// des Spielers
struct player {
	char* name;
	objectType choice;
};

// Variable für den Namen des Spielers 
char name[15];

// Name des Spielers eingeben
char* enterName(char str[])
{
	cout << "Name des Spielers eingeben: ";
	cin >> str;
	return str;

}

// Den Computer zufällig waehlen lassen. 
// Nutzen Sie srand(...) und rand().
objectType randomChoice()
{
	int choice;
	srand((int)time(NULL));
	choice = (rand() % 3) + 1;
	cout << choice << endl;

	switch (choice)
	{
		case 1:
			return STEIN;

		case 2:
			return SCHERE;

		case 3:
			return PAPIER;

		default:
			cout << "Nicht erkannt";
			exit;
	}



}

// Die Wahl von STEIN etc. als String zurückgeben lassen
char* object2str(objectType o)
{
	switch (objectType o)
	{
	case STEIN:
		cout << "Stein";
		break;
	case SCHERE:
		cout << "Schere";
		break;
	case PAPIER:
		cout << "Papier";
		break;
	default:
		break;
	}

}



// Einen Text mit dem Namen des Spielers und seiner Wahl ausgeben
void showPlayer(player p)
{
    cout << p.name << "hat das Objekt ";
    cout << p.choice << " gewaehlt";
    return;
}

// Die Wahl des Spielers abfragen
objectType enterChoice()
{
    int choice;
    cout << "Bitte Objektwahl eingeben (1 = Stein, 2 = Schere, 3 = Papier): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        return STEIN;
    case 2:
        return SCHERE;
    case 3:
        return PAPIER;
    default:
        cout << "Nicht erkannt";
        exit;
    }

}

// Die Wahl bestimmen, die gewonnen hat
objectType winningObject(objectType obj1, objectType obj2)
{
    cout << "Test winningObject";
	if (obj1 == STEIN )
	{
		if (obj2 == SCHERE) {
			return STEIN;
		}
		if
		{

		}
	}
    

}

// Ausgeben, wer gewonnen hat
void showWinner(player p1, player p2)
{
    winningObject(p1.choice, p2.choice);
    cout << "Test showWinner";
    return;

}

int main()
{
	player player1, player2;
	player1.name = "Computer";
	player1.choice = randomChoice();
	cout << "Der Computer hat sein Wahl getroffen." << endl;
	player2.name = enterName(name);
	player2.choice = enterChoice();
	showPlayer(player1);
	showPlayer(player2);
	showWinner(player1, player2);
}







