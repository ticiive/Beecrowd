#include <iostream>

using namespace std;

int main(){
    int aposta[6],sort[6],acertos;
    string saida;
    acertos = 0;
    
    for (int i = 0; i < 12; i++)
    {
        if (i<6)
        {
            cin>>aposta[i];
        } else{
            cin>>sort[i-6];
        }
    }
   
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (aposta[i]==sort[j]){
                acertos++;
            }
            
        }
        
    }
    if (acertos<3)
    {
        saida = "azar";
    } else if (acertos == 3)
    {
        saida = "terno";
    } else if(acertos == 4){
        saida = "quadra";
    }else if(acertos == 5){
        saida = "quina";
    }else{
        saida = "sena";
    }

    cout<<saida<<endl;
    
    
    
}