#include <iostream>
using namespace std;
int main() {
	float v[100]{ 0 };
	float voto;
	int m[100];
	int sc;
	int max;
	int i = 0;
	float media, s = 0;
	int j = 0;
	int nm=7;

	do {
		cout << "Inserisci la materia nella quale inserire il voto: " 
		<< endl << "|------------------------------------|"
		<< endl << "|       1:  Informatica              |" 
		<< endl << "|       2:  Telecomunicazioni        |" 
		<< endl << "|       3:  Tpsit                    |" 
		<< endl << "|       4:  Italiano                 |" 
		<< endl << "|       5:  Storia                   |" 
		<< endl << "|       6:  Inglese                  |" 
		<< endl << "|       7:  Sistemi e reti           |" 
		<< endl << "|------------------------------------|"
		<< endl << "          0:  Continua"
		<< endl << "              -->";
		cin >> sc;
		system("CLS");
		if (sc != 0) {
			do {
				cout << "Inserisci il voto preso: ";
				cout<<"        -->";
				cin >> voto;
				v[i] = voto;
				m[i] = sc;
			
			} while (voto <= 0 || voto > 10);
			system("CLS");
			i++;

		}
	} while (sc != 0);

	system("CLS");
	max = i;
	
	cout << "Inserici di quale materia vuoi vedere la media?: "
		<< endl << "|------------------------------------|"
		<< endl << "|       1:  Informatica              |" 
		<< endl << "|       2:  Telecomunicazioni        |" 
		<< endl << "|       3:  Tipsit                   |" 
		<< endl << "|       4:  Italiano                 |" 
		<< endl << "|       5:  Storia                   |" 
		<< endl << "|       6:  Inglese                  |" 
		<< endl << "|       7:  Sistemi e reti           |" 
		<< endl << "|------------------------------------|"
		<< endl << "              -->";
	cin >> sc;
	
	for (i = 0, j=0; i < max; i++) {
		if (m[i] == sc) {
				s = s + v[i];
				j++;
			}
	}
	
	if(j>0){
	
		cout<<"La media e di:"<<s/j;
		if(s/j<6)
			cout<<endl<<"Studia di piu";
		else
			cout<<endl<<"Bravo hai la materia sopra!";
	
	}else
		cout<<"non hai voti di questa materia"<<endl;
	
	
}


