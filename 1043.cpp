#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double a,b,c;
    cin>>a>>b>>c;

    if (c<=a+b | a<= b+c | b<=a+c)
    {
        cout<<"Area = "<<fixed<<setprecision(1)<<((a+b)*c)/2<<"\n";
    }
    else{
        
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<"\n";
    }
    

}