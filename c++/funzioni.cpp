#include <iostream>
#include <string.h>
using namespace std;
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

char coutmenu(){
	char sce;
	cout<<"a - il programma trova il maggiore di N numeri inseriti dall'utente\n"<<
	      "b - il programma trova il minimo comune multiplo tra due numeri inseriti dall'utente\n"<<
		  "c - il programma stampa tutti i numeri primi da 2 a N (N è un numero maggiore di 2 scelto dall'utente)\n"<<
		  "d - il programma esegue la moltiplicazione di due numeri attraverso le somme\n"<<
		  "e - il programma esegue l'elevamento a potenza attraverso la funzione precedente\n"<<
		  "f - il programma converte in binario un numero decimale N inserito dall'utente (N positivo)\n"<<
		  "g - il programma converte in decimale un numero N inserito dall'utente (il numero N deve essere composto solo da 1 e 0)\n";
	cin>>sce;
	return sce;
	
}

int cinnum(int mix, int max, bool min, bool mas){
	
	int n;
	if(min, mas){
		cin>>n;
		while(n>max || n<mix){
			cout<<"errore --> ";
			cin>>n;
		}
		return n;
	}
	
	if(min, !mas){
		cin>>n;
		while(n<mix){
			cout<<"errore --> ";
			cin>> n;
		}
		return n;
	}
	
	if(!min, mas){
		cin>>n;
		while(n>max){
			cin>>n;
		}
		return n;
	}
	
	if(!min, !mas){
		cin>>n;
		return n;
	}
	
	
}

int mag(int a, int b){
	if(a>b){
		return a;	
	}
	else{
		return b;
	}
}

int maggn(){
	int nnum, n, max=0;
	cout<<"quanti numeri vuoi inserire? --> ";
	cin>>nnum;
	for(int i=0;i<nnum;i++){
		cout<<"Metti un numero";
		n=cinnum(0, 50, true, true);
		max=mag(max, n);
	}
	return max;
}

int mcm(int a,int b){
	int t=a;
	while(t%b!=0){
		t+=a;
	}
	return t;
}



bool primo(int n){
	int divisore, resto;

    divisore=2;

    while (divisore<n)
        {

        if (n%divisore==0){
            return false;
        }

        divisore = divisore+1;
        }

    if (divisore == n)
        return true;
}

void coutprimi(int max){
	for(int i=2;i<max;i++){
		if(primo(i)){
			cout<<"["<<i<<"]";
		}
	}
	cout<<"\n\n";
}




string decbin(int dec){
	string b;
	while (dec>0) {
		if (dec%2==0)
			b='0'+b;
		else
			b='1'+b;
		dec=dec/2;
	}
	
	return b;
}

int bindec(int bin){
	int d=0, i=0;
	while(bin>0){
		if(bin%10!=0) {
			d=d+pow(2,i);
		}
		if(bin%10!=0 && bin%10!=1){
			return 0;
		}
		bin=bin/10;
		i++;			
	}
	return d;
}

int mul(int a, int b){
	int ris=0;
	for(int i=0;i<b;i++){
		ris+=a;
	}
	return ris;
}

int power(int a, int b){
	int ris = a;
	for(int i=1;i<b;i++){
		a=mul(ris, a);
	}
	return a;
}
int main(){
	int max, a, b;
	int sce;
	int ris;
	string num;
	
	
	
	do{
		system("PAUSE");
		system("CLS");
		sce=coutmenu();
		system("CLS");
		switch(sce){
		case 'a':
		case 'A':
			max=maggn();
			cout<<"\nIl maggiore e' --> "<<max;
			break;
			
		case 'b':
		case 'B':
			cout<<"primo numero --> ";
			a=cinnum(0, 50, true, true);
			cout<<"\ninserisci un secondo numero --> ";
			b=cinnum(0, 50, true, true);
			cout<<"il maggiore tra "<<a<<" e "<<b<< " e' --> "<<mcm(a, b)<<"\n";
			
			break;
			
		case 'c':
		case 'C':
			cout<<"inserisci un numero max --> ";
			max=cinnum(2, 1000, true, false);
			coutprimi(max);
			break;
			
		case 'd':
		case 'D':
			cout<<"inserisci primo numero --> ";
			a=cinnum(0, 50, true, true);
			cout<<"inserisci secondo numero --> ";
			b=cinnum(0, 50, true, true);
			ris=mul(a, b);
			cout<<"il risultato e' --> "<<ris;
			break;
			
		case 'e':
		case 'E':
			cout<<"inserisci un numero di base --> ";
			a=cinnum(0, 50, true, true);
			cout<<"inserisci esponente --> ";
			b=cinnum(0, 50, true, true);
			ris=power(a,b);
			cout<<"la potenza è uguale a --> " << ris;
			break;
			
		case 'f':
		case 'F':
			cout<<"inserisci un numero da convertire --> ";
			a=cinnum(0, 1000, true, true);
			num=decbin(a);
			cout<<"Il numero convertito e' --> " << num;
			cout<<"\n\n";
			break;
			
		case 'g':
		case 'G':
			cout<<"inserisci un numero binario --> ";
			a=cinnum(0, 1000000, true, true);
			b=bindec(a);
			if(b==0){
				cout<<"\n\n non hai inserito un numero binario\n";
			}
			else{
				cout<<"\n\n"<<a<<"convertito in base 10 e' --> " << b;
			}
			
			
			
	}
	}while(sce!='x'&&sce!='X');
	
	
}
