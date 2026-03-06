#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int a,b;
    double c;

    cin>>a>>b;

    if (a == 1)
    {
        c = 4*b;
    }
    if (a == 2)
    {
        c = 4.50*b;
    }
    if (a == 3)
    {
        c = 5*b;
    }
    if (a == 4)
    {
        c = 2*b;
    }
    if (a == 5)
    {
        c = 1.50*b;
    }

    cout<<"Total: R$ "<<fixed<<setprecision(2)<<c<<"\n";


}