#include <iostream>
using namespace std;

int main(){
    int n,maria,joao,entrada;


    while (true)
    {
        cin>>n;
        maria = 0;
        joao = 0;
        if (n ==0)
        {
            break;
        }
        for(int i = 0;i<n;i++){
            cin>>entrada;
            if (entrada == 0)
            {
                maria++;
            }else{
                joao++;
            }  
        }

        cout<<"Mary won "<<maria<<" times and John won "<<joao<<" times\n";
        
    }
}