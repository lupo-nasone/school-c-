#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    //inserimento numeri
    srand(time(NULL));
    int a[100];
    int n, i, sc;
    int s;
    cout << "Inserisci la quantita di numeri da generare -->";
    cin >> n;
    for (i = 0; i < n; i++) {
        a[i] = rand() % 50 + 1;
    }
    for (i = 0; i < n; i++) {
        cout << "[" << a[i] << "]";
    }
    //rimozione numeri
    do{
        cout << "che numero vuoi rimuovere? (0 per uscire) -->";
        cin >> sc;
        for (i = 0; i < n; i++) {
            if (a[i] == sc) {
                for(i=i;i<n;i++)
                    a[i]=a[i+1];
            }
        }
        for (i = 0; i < n-1; i++) {
        	if(a[i]<51&&a[i]!=0)
            cout << "[" << a[i] << "]";
        }
    }while(sc!=0);



}
