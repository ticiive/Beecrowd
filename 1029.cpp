#include <iostream>
using namespace std;
int aux=0;
int fib(int n){
    if (n<=1)
    {
        aux++;
        return n;
    }
    aux++;
    return fib(n-1)+fib(n-2);


}

int main(){
    int x,z,aux2;
    
    cin>>x;

    for (int i = 0; i < x; i++)
    {
        cin>>z;
        aux =0;
        aux2 = fib(z);
        cout<<"fib("<<z<<") = "<<aux-1<<" calls = "<<aux2<<endl;
    }
    
}