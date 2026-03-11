#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    for (size_t i = 1; i < 10001; i++)
    {
        if (i%n==2)
        {
            cout<<i<<endl;
        }
        
    }
    
}