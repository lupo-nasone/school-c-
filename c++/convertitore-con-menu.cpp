#include <iostream>
#include <math.h>

using namespace std;

int main(){
    char sc;
    int bin[100], dec, r;
    int bina, deca=0;
    int i=0;
    do {
        cout<<"Che cosa vuoi fare?"<<endl
        <<"|-------------------------------------|"<<endl
        <<"|      1 decimale -->  binario        |"<<endl
        <<"|      2 binario  -->  decimale       |"<<endl
        <<"|                 x esci              |"<<endl
        <<"|-------------------------------------|"<<endl
        <<"            -->";
        cin>>sc;
        system("CLS");
        switch (sc) {
            case '1' :{
                i=0;
                r=0;
                bin[100]={0};
                cout<<"inserisci il numero decimale: ";
                cin>>dec;
                system("CLS");
                while(dec>0) {
                    r = dec % 2;
                    dec = dec / 2;
                    bin[i] = r;
                    i++;
                    sc='1';
                }
                break;
            }
            case '2' :{
                i=0;
                r=0;
                bin[100]={0};
                cout<<"inserisci il numero in binario: ";
                cin>>bina;
                system("CLS");
                while(bina>0) {
                    r = bina%10*pow(2, i);
                    bina = bina / 10;
                    deca=deca+r;
                    i++;
                    sc='2';
                }
                break;
            }

        }
        if(sc=='1') {
            while (i > 0) {
                cout << bin[i-1];
                i--;
            }
            cout<<endl;
        }
        else{
            cout<<deca<<endl;
            }
        system("PAUSE");
        system("CLS");
        }while(sc!='x');
    }



