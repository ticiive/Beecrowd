#include <iostream>
using namespace std;

int fibo(int n, int vec[]){
    if (n<=1)
    {
        return n;
    }
    if (vec[n]!=0)
    {
        return vec[n];
    }else{
        vec[n] = fibo(n-1,vec)+fibo(n-2,vec);

        return vec[n]; 
    } 

}
int main(){

    int vec[8] = {0};
    cout<<fibo(7,vec)<<endl;
}