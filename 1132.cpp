#include <iostream>

using namespace std;

int main(){
    int x,y,z,soma;
    cin>>x>>y;
    soma = 0;

    if (y<x)
    {
        z = x;
        x = y;
        y = z;
    }

    for (int i = x; i < y+1; i++)
    {
        if (i%13!=0)
        {
            soma = soma + i;
        }
        
    }
    cout<<soma<<endl;
    
    

}