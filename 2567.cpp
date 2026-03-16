#include <iostream>

using namespace std;

int main(){
    int n,aux,x,soma;
    cin>>n;
    soma = 0;
      

    for (int i = 0; i < x; i++)
    {
        cin>>virus[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (virus[i]<virus[j])
            {
                aux = virus[j];
                virus[j] = virus[i];
                virus[i] = aux;
            }
            
        }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
        
            soma = soma + (virus[i+1] - virus[i]);
        }
        
    }

    cout<<"SOMA.  "<<soma;
    
    
    

 
    
    
    
    
}