#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int numeri[10], num, a;

    srand(time(NULL));
    cout<<"inserisci 10 numeri da mettere in ordine -->";

    for (int i = 0; i < 10; ++i) {

        cin>>numeri[i];
    }

    cout << endl;

    for (int i = 0; i < 10; ++i) {

        a = i;

        for (int j = i; j < 10; ++j) {

            if (numeri[j] < numeri[a]) {

                a = j;

            }
        }
        num = numeri[a];
        numeri[a] = numeri[i];
        numeri[i] = num;
    }
    cout<<"numeri in ordine -->";

    for (int i = 0; i < 10; ++i) {

        cout <<"["<<numeri[i] << "]";
    }
    cout<<" <--";
}
