#include <iostream>
using namespace std;
int main(){
    int n;
    int primi [500];
    int i;
    int divisibile=0;
    int j;
    int esci = 0;
    int f=0;

    cout<<"inserisci il limite che i numeri primi devono raggiungere -->";
    cin>>n;
    primi[0]=1;
    int jmax=1;
    for (i=2;i<=n;i++){
        j=1;
        esci=0;
        while(j<jmax && esci == 0){
            if(i % primi[j]==0){
                divisibile=1;
                esci=1;
            }
            else{
                divisibile=0;
            }
            j++;
        }
        if(divisibile==0){
            primi[jmax]=i;
            jmax ++;
        }
    }
    for(i=0;i<jmax;i++){
        cout<<"["<<primi[i]<<"]";
    }
    system("PAUSE");
    system("CLS");
    //richieste
    while(n!=0){
        cout<<endl<<"inserisci un numero (0 per uscire)"<<endl;
        cin>>n;
        i=0;
        while(primi[i]<n){
            cout<<"["<<primi[i]<<"]";
            i++;
        }

    }
    system("CLS");

}


