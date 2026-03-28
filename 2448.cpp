#include <iostream>

using namespace std;

int main(){

    int n,m,atual,passos;
    cin>>n>>m;
    int casas[n],encomendas[m];

    for (int i = 0; i < n; i++)
    {
        cin>>casas[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>encomendas[i];
    }

    atual = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j= 0; j < n; j++)
        {
            if (casas[j]==encomendas[i])
            {

                passos = passos + abs(atual-j);
                atual = j;
                

            }
            
        }
        
        
    }
    
    cout<<passos<<endl;
    
}