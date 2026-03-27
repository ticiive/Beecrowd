#include <iostream>
using namespace std;

int main(){

    int t,n,m,aux,iterador,soma,qtd;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cin>>n>>m;
        soma = 0;
        int vec[n];
        iterador = 0;
        qtd = 0;
        for (int j = 0; j < n; j++)
        {
            cin>>vec[j];
        }
        for (int k = 0; k < n; k++)
        {
            for (int h = 0; h < n; h++)
            {
                if (vec[h]<vec[k])
                {
                    aux = vec[h];
                    vec[h] = vec[k];
                    vec[k] = aux;
                }   
            }  
        }
        while (true)
        {
            if (vec[iterador]>m)
            {
                iterador++;
                continue;
            }if (soma+vec[iterador]<=m)
            {
                soma = soma + vec[iterador];
                qtd++;

                if (soma == m)
                {

                    break;
                }
                continue;
            }else{
                iterador++;
                continue;
            }
            
        }

        cout<<qtd<<endl;
    }
    
}