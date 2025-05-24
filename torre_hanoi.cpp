#include<iostream>
using namespace std;

void torre_hanoi(int n, char ori, char dest,char aux){
    if(n ==1){
        cout<<"Move disco "<<n<<" de "<<ori<<" para "<< dest <<"."<<endl; //só serve para o disco 1, pois é o caso base
        return;
    }
    
    torre_hanoi(n-1,ori,aux,dest); //joga os n-1 discos para a torre auxiliar
    cout<<"Move disco "<<n<<" de "<<ori<<" para "<< dest <<"."<<endl;
    torre_hanoi(n-1,aux,dest,ori); //joga os n-1 discos da torre auxiliar para a torre de destino
}


int main(){
    int n;
    cout<<"Digite o numero de discos: ";
    cin>>n;
    torre_hanoi(n,'A','B','C');
    cout<<endl;
    return 0;
}