#include <iostream>

using namespace std;

int main(){
    int a[3],aux,b[3];
    
    for (int i = 0; i < 3; i++)
    {
        cin>>aux;
        a[i] = aux;
        b[i] = aux;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j<3;j++)
        {
            if (a[i]<a[j])
            {
                aux = a[j];
                a[j] = a[i];
                a[i] = aux;
            }
            
        }
        
    }
    cout<<a[0]<<"\n"<<a[1]<<"\n"<<a[2]<<"\n"<<"\n"<<b[0]<<"\n"<<b[1]<<"\n"<<b[2]<<"\n";
    
    
}