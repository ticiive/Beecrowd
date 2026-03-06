#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double sal,reajuste,aumento;
    cin>>sal;

    if (sal <=400)
    {
        reajuste = 0.15;
    }else if(sal<=800){
        reajuste = 0.12;
    }else if (sal<=1200)
    {
        reajuste = 0.10;
    }else if(sal<=2000){
        reajuste = 0.07;
    }else{
        reajuste = 0.04;
    }
    aumento = sal*reajuste;

    cout<<"Novo salario: "<<fixed<<setprecision(2)<<sal+aumento<<"\n"<<"Reajuste ganho: "<<aumento<<"\n";
    cout<<"Em percentual: "<<fixed<<setprecision(0)<<reajuste*100<<" %\n";
    
    
}