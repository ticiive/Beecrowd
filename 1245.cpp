#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,tam,aux,contador,tame,tamd;
    char lado;
    vector<int> e,d;


while (cin>>n)
{
    contador = 0;
    tame=0,tamd=0;
    e.clear();d.clear();

    for (int i = 0; i < n; i++)
    {
        cin>>tam>>lado;
        if (lado == 'E')
        {
            e.push_back(tam);
            tame++;

        }else{
            d.push_back(tam);
            tamd++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i>= tamd && i>= tame)
            {
                break;
            }
            
            if (i<tame)
            {
                if (e[j]>e[i])
                {
                aux = e[j];
                e[j] = e[i];
                e[i] = aux;
                }
                

            }
            if (i<tamd)
            {
                if (d[j]>d[i])
                {
                aux = d[j];
                d[j] = d[i];
                d[i] = aux;
                }
                
            }

            
            
        }
    }
    while (!e.empty() && !d.empty())
    {
        
        if (d[0]==e[0])
        {
            contador++;
            e.erase(e.begin());
            d.erase(d.begin());
        }else{
            if (d[0]>e[0])
            {
                e.erase(e.begin());
            }else{
                d.erase(d.begin());
            }
            
        }
        
    }
    cout<<contador<<"\n";

}
}