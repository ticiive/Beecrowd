#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int a,b,c,d;
    cin>>a>>b>>c;

    d = (a+b+abs(a-b))/2;

    d = (d+c+abs(d-c))/2;

    cout<<d<<" eh o maior\n";
    
    return 0;
    
    




}