#include <iostream>

using namespace std;

int main(){
    int n,contador;
    char c;
    string lados;


while (cin>>n)
{
    int tamanhos[n];
    lados.clear();
    contador = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>tamanhos[i]>>c;
        lados += c;

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tamanhos[i] == tamanhos[j] && lados[i] != lados[j])
            {
                tamanhos[i] = 3;
                tamanhos[j] = 4;
                contador++;
            }
            
        }
        
    }
    cout<<contador<<"\n";
    
    
}






}