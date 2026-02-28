#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int cod1,cod2,n1,n2;
    double val1,val2;

    cin>>cod1>>n1>>val1>>cod2>>n2>>val2;

    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<n1*val1+n2*val2<<"\n";
    return 0;




}