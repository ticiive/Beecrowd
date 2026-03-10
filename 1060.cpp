#include <iostream>

using namespace std;

int main(){

    double a,positivos;
    positivos = 0;
    for (int i = 0; i < 6; i++)
    {
        cin>>a;
        if(a>0){
            positivos++;
        }
    }
    cout<<positivos<<" valores positivos\n";
    
}