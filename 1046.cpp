#include <iostream>

using namespace std;

int main(){
    int i,f,t;
    cin>>i>>f;

    if (i == f)
    {
        t = 24;
    }else if(i<f){
        t = f-i;
    }else{
        t = (24-i)+f;
    }
    cout<<"O JOGO DUROU "<<t<<" HORA(S)\n";
    
}