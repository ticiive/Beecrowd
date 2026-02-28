#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float sal,imposto,aux;
    cin>>sal;
    imposto = 0;
    aux = 0;

    if (sal>=4500)
    {
        aux = sal - 4500;
        imposto = imposto + aux * 0.28;
    }
    if (sal>=3000.01)
    {
        if (aux>0)
        {
            aux = 4500 - 3000.01;
        }else{
        aux = sal - 3000.01;}
        
        imposto = imposto + aux *0.18;
    }
    if (sal>=2000.01)
    {
        if (aux>0)
        {
            aux = (3000.01-2000.01);
        }else{
            aux=sal-2000.01;
        }
        
        
        imposto = imposto + (aux*0.08);
    }
    
    
    

    if (imposto == 0)
    {
        cout<<"Isento\n";
    }else{
    cout<<fixed<<setprecision(2)<<"R$ "<<imposto<<"\n";
    }

    return 0;
    
    
    
    
    

}