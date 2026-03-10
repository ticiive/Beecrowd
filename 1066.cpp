#include <iostream>

using namespace std;

int main(){
    double par,impar,pos,neg,a;
    pos=0,neg=0,par=0,impar=0;


    


    for (int i = 0; i < 5; i++)
    {
        cin>>a;
        if (a>0)
        {
            pos++;
        }
        if (a<0)
        {
            neg++;
        }
        if (int(a)%2==0)
        {
            par++;
        }else{
            impar++;
        }
    }

        cout<<par<<" valor(es) par(es)\n"<<impar<<" valor(es) impar(es)\n"<<pos<<" valor(es) positivo(s)\n"<<neg<<" valor(es) negativo(s)\n";
        
        
        
    
}

