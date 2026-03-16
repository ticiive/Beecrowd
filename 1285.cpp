#include <iostream>

using namespace std;

int main(){

    int n,m,auxn,auxn2,valido,numcasas;
    string aux;

    while (cin>>n)
    {
        cin>>m;
        numcasas = 0;
        valido = 0;

        for (int k = n; k < m+1; k++)
        {
            aux = to_string(k);
            for (int i = 0; i < aux.size(); i++)
            {
                for(int j = 1; j < aux.size(); j++)
                {
                    if (i == j)
                    {
                        continue;
                    }
                    
                    if(aux[i]==aux[j]){
                        valido = 0;
                        break;
                    }else{
                        valido = 1;
                        continue;
                    }
                  
                    
                }
                  if (valido==0)
                    {
                        break;
                    }
                
            }
            if (valido==1)
            {
                numcasas++;
            }
            
               
                
            
            
        }
        cout<<numcasas<<endl;
        
    }
    
}