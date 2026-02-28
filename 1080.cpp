#include <iostream>

using namespace std;

int main(){

    int a;
    int maior,pos;

for (int i =0; i<5; i++){

    cin>>a;
    if (i==0){
        maior = a;
        pos = 1;
    }
    if (a>maior)
    {
        maior = a;
        pos = i+1;
    }

}

cout<<maior<<"\n"<<pos<<"\n";
return 0;






}