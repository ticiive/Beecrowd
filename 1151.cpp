#include <iostream>

using namespace std;


int main(){

    int n;
    cin>>n;
    int x[n];

    for (int i = 0; i < n; i++)
    {
        if (i==0){
            x[i] = 0;
        }else if (i==1)
        {
            x[i] = 1;
        }else{
            x[i] = x[i-1]+x[i-2];
        }

        if (i==n-1)
        {
            cout<<x[i]<<endl;
        }else{
        
        cout<<x[i]<<" ";}

        
        
        
        
    }
    


}