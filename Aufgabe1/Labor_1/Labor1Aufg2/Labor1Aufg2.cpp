// Labor1Aufg2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int size;
    float summe = 0;
    float durchschnitt;

    cout << "Wie viele Zahlen sollen eingelesen werden ? : ";
    cin >> size;
    int* irray = new int[size];

    cout << endl;
    cout << "Geben Sie die Zahlen ein:" << endl;

    for (int x = 0; x < size; x++) {
        cin >> irray[x];
        
    }

    for (int x = 0; x < size; x++) {
        cout << irray[x] << " ";
        summe += irray[x];
    }

    cout << endl;

    durchschnitt = summe / size;
    cout << durchschnitt << endl;

    delete[] irray;

    return 0;
}

