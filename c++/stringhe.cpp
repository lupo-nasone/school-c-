#include <iostream>

using namespace std;

int main() {
    //menu
    bool inserito = false;
    bool uguale = true;
    char sce;
    char string[100];
    char string2[100];
    int lstring = 0;
    int lstring2 = 0;
    char car;
    int ncar = 0;
    int j=0;
    int h;
    bool ug=false;
    int k;

    do {
        cout << "scegli l' opsione che desideri eseguire\n" <<
             "S --> Inserisci una stringa\n" <<
             "L --> Scopri quanto è lunga la stringa\n" <<
             "C --> Inserisci un carattere e scopri quante volte è stato inserito nella stringa\n" <<
             "U --> Inserisci una seconda stringa e scopri se è uguale alla principale\n" <<
             "A --> Unisci la stringa principale con un'altra stringa\n" <<
             "B --> Inserisci una seconda stinga e ti verra detto se è una sottostringa della principale\n";
        cin >> sce;

        switch (sce) {
            case 's':
            case 'S':
                lstring = 0;
                inserito = true;
                cout << "Inserisci una parola/frase da usare come principale\n-->";
                cin >> string;
                system("CLS");
                cout << "hai inserito: " << string << "\n";
                system("PAUSE");
                //calcolo lunghezza tring
                while (string[lstring] != '\0') {
                    lstring++;
                }
                break;

            case 'l':
            case 'L':
                if (inserito == true) {
                    while(string[lstring]!='\0')
                        lstring++;

                    cout << "la parola " << string << " è lunga " << lstring << " caratteri\n";
                    system("PAUSE");
                    system("CLS");
                } else
                    cout << "devi prima inserire una stringa (seleziona S)\n";
                break;


            case 'c':
            case 'C':
                if (inserito == true) {
                    ncar = 0;
                    cout
                            << "inserisci un carattere per scoprire quante volte è stato inserito nella stringa principale\n";
                    cin >> car;
                    for (int i = 0; i < lstring; i++) {
                        if (string[i] == car)
                            ncar++;

                    }
                    cout << "Il carattere " << car << " è stato inserito " << ncar << " volte";
                } else
                    cout << "devi prima inserire una stringa (seleziona S\n";
                break;

            case 'u':
            case 'U':
                if (inserito == true) {
                    uguale == false;
                    cout << "inserisci una seconda stringa per capire se è uguale a quella principale\n";
                    cin >> string2;
                    lstring2 = 0;
                    while (string2[lstring2] != '\0')
                        lstring2++;

                    for (int i = 0; i < lstring; i++) {
                        if (string[i] != string2[i])
                            uguale = false;

                    }
                    if (uguale == true) {
                        cout << "le due stringhe sono uguali\n";
                    } else {
                        cout << "la stringa " << string << " e la stringa " << string2 << " sono diverse\n";
                    }
                } else
                    cout << "devi prima inserire una stringa (selezionare S)\n";
                break;

            case 'a':
            case 'A':
                if (inserito == true) {
                    cout<<"inserisci una seconda stringa da unire alla prima con uno spazio in mezzo\n";
                    cin>>string2;
                    //lunghezza string 2
                    while(string2[lstring2]!='\0')
                        lstring2++;
                    string[lstring]=' ';

                    j=0;
                    //accoppiamento di 2 stringhe
                    for(int i=lstring+1;i<lstring2+lstring+1;i++){
                        string[i]=string2[j];
                        j++;
                    }

                    cout<<"funziona? string--> "<<string<<"\n";



                } else
                    cout << "devi prima inserire una stringa (inserisci S)";

            case 'b':
            case 'B':
                if(inserito==true) {
                    cout << "inserisci una seconda string ed il programma individua si si trova nella prima\n";
                    cin >> string2;
                    //calcoliamo la lunghezza della riga 2
                    while(string2[lstring2]!='\0')
                        lstring2++;
                    //controllo della sottostringa
                    h=0;
                    for(int i=0; i<lstring-lstring2; i++){
                    	h=0;
                        for(int j=0; j<lstring2; j++){
                            if(string[j+i]==string2[j]){
                            	h++;
							}
							if(h==lstring2)
								ug=true;
                        }
                        
                    }
                    if(ug)
                    cout<<"'"<<string2<<"' è una sottostringa\n";
                    else
                    cout<<"'"<<string2<<"' non è uan soottostringa\n";
					
                    


                }
                else
                    cout<<"devi prima inserire una stringa (seleziona la S)\n";




        }


    } while (sce != 'x' && sce != 'X');
    
    
    return 0;
    
}
