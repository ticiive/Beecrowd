#include <iostream>

using namespace std;

int main(){

    int n,aux,x,soma;
    
    while (cin>>n)
    {
        
    
    
    soma = 0;
    int virus[n];
      

    for (int i = 0; i < n; i++)
    {
        cin>>virus[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (virus[j]<virus[i])
            {
                aux = virus[j];
                virus[j] = virus[i];
                virus[i] = aux;
            }
            
            
        }
        
    }
    cout<<virus[0]<<virus[20];

    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            if (i==n-1)
            {
                soma = soma+(virus[i]-virus[i-1]);
            }else{
            
            soma = soma + (virus[i+1] - virus[i]);}
        }
        
    }

    cout<<soma<<endl;
}
    
    
    

 
    
    
    
    
}