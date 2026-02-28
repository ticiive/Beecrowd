#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,aux,incremento;
    cin>>n;
    int k[n];
    vector<int> numeros, incrementos;
    

    for (int i = 0; i < n; i++)
    {
        cin>>k[i];  
    }
    for ( int i = 0; i < n; i++)
    {
       
        for (int j = 0; j < n; j++)
        {
            if (k[j]>k[i])
            {
                aux = k[j];
                k[j] = k[i];
                k[i] = aux;
            }      
        }
    }
    for (int i = 0; i < n; i++)
    {
        incremento = 0;
        for (int j = 0; j < n; j++)
        {
            aux = k[i];
            if (k[j]==k[i])
            {
                incremento++;
                
            }
            
            
            
        }
        if (i==0)
            {
                numeros.push_back(k[i]);
                incrementos.push_back(incremento);
            }else{
                if (k[i]>k[i-1])
                {
                    numeros.push_back(k[i]);
                    incrementos.push_back(incremento);
                }
                
            }
        
    }
    
    for (int i = 0; i < numeros.size(); i++)
    {
        cout<<numeros[i]<<" aparece "<<incrementos[i]<<" vez(es)\n";
    }


}