#include <iostream>
using namespace std;

int main(){

    float x,y;
    string quadrante;
    cin>>x>>y;

    if (x == 0 | y==0)
    {
        if (x==y)
        {
            quadrante = "Origem";
        }else if (x==0)
        {
            quadrante = "Eixo Y";
        }else{
            quadrante = "Eixo X";
        }
        
    }else{
    
    if (x>0)
    {
        if (y>0)
        {
            quadrante = "Q1";
        }else{
            quadrante = "Q4";
        }
        
    }else{
        if (y>0)
        {
            quadrante = "Q2";
        }else{
            quadrante = "Q3";
        }
        
    }
}
cout<<quadrante<<"\n";
}