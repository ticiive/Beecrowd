#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double a,b,c;
    cin>>a>>b>>c;

    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<(a*c)/2<<"\n"<<"CIRCULO: "<<c*3.14159*c<<"\n"<<"TRAPEZIO: "<<((a+b)*c)/2<<"\n"<<"QUADRADO: "<<b*b<<"\n"<<"RETANGULO: "<<a*b<<"\n";

return 0;


}