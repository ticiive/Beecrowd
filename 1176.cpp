#include <iostream>
int vec[70] = {0};
int fib(int n){
    if(n<=1){
        vec[n] = n;
        return n;
    }else{
    if (vec[n]!=0)
    {
        
        return vec[n];
    }else{
        vec[n] = fib(n-1)+fib(n-2);
        return vec[n];
    }
    }
}


using namespace std;

int main(){
    int n,t;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>t;
        cout<<"Fib("<<t<<") = "<<fib(t)<<endl;
    }
    
}

