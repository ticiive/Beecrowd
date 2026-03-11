#include <iostream>

using namespace std; 

int main(){

    int n,alcool,gas,diesel;
    alcool =0,gas=0,diesel=0;

    while (true)
    {
        cin>>n;
        if (n==4)
        {
            break;
        }

        if(n<1 || n>3){
            continue;
        }
        if (n==1)
        {
            alcool++;
        }
        if (n==2)
        {
            gas++;
        }
        if (n==3)
        {
            diesel++;
        }
    }
    cout<<"MUITO OBRIGADO\n"<<"Alcool: "<<alcool<<endl<<"Gasolina: "<<gas<<endl<<"Diesel: "<<diesel<<endl;
    
}