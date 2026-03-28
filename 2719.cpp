#include <iostream>

using namespace std;

int main(){

    int t,n,m,soma,viagens;

    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>m;
        int vec[n];
        viagens = 1;
        soma=0;

        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
            if (soma+vec[i]<=m)
            {
                soma = soma + vec[i];
            }else{
                soma = vec[i];
                viagens++;
            }
            
            
        }
        cout<<viagens<<endl;
        
    }
    
}