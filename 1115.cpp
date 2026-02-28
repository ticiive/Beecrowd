#include <iostream>

using namespace std;

int main(){

    int x,y;
    string quadrante;
    
    while (true)
    {
        cin>>x>>y;
        if (x==0 or y==0)
        {
            break;
        }
        
        if (x>0)
        {
            if (y>0)
            {
                quadrante = "primeiro";
            }else{
                quadrante = "quarto";
            }
        }else{
            if (y>0)
            {
                quadrante = "segundo";
            }else{
                quadrante = "terceiro";
            }
            
        }
        cout<<quadrante<<"\n";

        
        
        
    }
    




}