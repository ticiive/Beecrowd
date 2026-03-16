#include <iostream>

using namespace std;

int main(){
    int n,aux,x,soma;
    cin>>x;

    if (x%2!=0)
    {
        n = x+1;
    }else{
        n = x;
    }
    
    
    int virus[n];
    if (x !=n)
    {
        virus[x] = 1001;
    }
    
    
    

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
    if (x!=n)
    {
        virus[x] = virus[x-1];
    }
    

    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            virus[i]
        }
        
    }
    
    
    

 
    
    
    
    
}