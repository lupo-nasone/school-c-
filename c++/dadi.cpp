#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main() {
    int l, i;
    int a[6] = {0};

    srand(time(NULL));
    for (i = 0; i < 10000; i++) {
        l = rand() % (6) + 1;
        a[l - 1] = a[l - 1] + 1;
    }
    cout << endl;
    for (i = 0; i < 6; i++) {
        cout << "il numero " << i + 1 << " e uscito " << a[i] << " volte" << endl;
    }
}

