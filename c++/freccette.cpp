#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

    srand(time(NULL));
    //variabili
    int squadre, giocatori, somma, totalePunti[100], mPun, mPunGen, max, mGiocatore;
    int i, j;
    //matrici
    int punteggi[squadre][giocatori], migliorPunti[squadre][2];


    cout << "Quante squadre ci sono: ";
    cin >> squadre;
    cout << endl;
    cout << "Quante persone ci sono per squadra: ";
    cin >> giocatori;
    cout << endl;


    for (i = 0; i < squadre; ++i) {
        for (j = 0; j < giocatori; ++j) {

            punteggi[i][j] = rand()%11;
            cout << "punteggio giocatore " << j + 1 << " squadra " << i + 1 << " --> " << punteggi[i][j] << endl;
        }
    }
    cout << endl;
    cout <<endl<<endl<<endl;

    cout << endl;
    for (i = 0; i < squadre; ++i) {
        cout << "Squadra " << i+1;
        somma = 0;
        mPun = punteggi[i][0];
        mPunGen = 0;
        for (j = 0; j < giocatori; ++j) {
            somma += punteggi[i][j];
            if (punteggi[i][j] > mPun) {
                mPun = punteggi[i][j];
                mPunGen= j;
            }
            cout << punteggi[i][j] << endl<<endl<<endl;
        }
        totalePunti[i] = somma;
        migliorPunti[i][0] = mPun;
        migliorPunti[i][1] = mPunGen;

        cout << endl;
    }

    cout << endl;
    max = 0;
    mGiocatore = 0;
    cout << "I migliori giocatori di ogni squadra: " << endl;
    for (i = 0; i < squadre; ++i) {
        if (totalePunti[i] > totalePunti[max]) {
            max = i;
        }
        if (migliorPunti[i][0] > migliorPunti[mGiocatore][0]) {
            mGiocatore = i;
        }
        cout << "Squadra " << i+1 <<endl<< "Giocatore " << migliorPunti[i][1]+1 << ": " << migliorPunti[i][0] << " punti" << endl;
    }
    cout << endl;
    cout << "La squadra migliore e' la squadra " << max+1 << ", ha totalizzato " << totalePunti[max] << " punti!";
    cout << endl;
    cout << "Il miglior giocatore e' il Giocatore " << migliorPunti[mGiocatore][1] + 1 << " della squadra " << mGiocatore + 1 << "!";
    return 0;

}
