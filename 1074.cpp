#include <iostream>

using namespace std;

int main(){

    int n,x;
    string sinal,par;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cin>>x;

        if (x%2==0)
        {
            par = "EVEN ";
        }else{
            par = "ODD ";
        }

        if (x>0)
        {
            sinal = "POSITIVE";
        }else{
            sinal = "NEGATIVE";
        }

        if (x == 0)
        {
            cout<<"NULL"<<endl;
        }else{
            cout<<par<<sinal<<endl;
        }
        
        
        
    }
    
}