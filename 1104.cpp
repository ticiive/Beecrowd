#include <iostream>
#include <vector>

using namespace std;

int main(){

    int trocas,a,b,n,cin;


    cin>>a>>b;
    trocas = 0;

    vector<int> bia,alice;
    if (a>b)
    {
        n = b;
    }else{
        n = a;
    }
    
    for (int i = 0; i < a+b; i++)
    {
        if (i<a)
        {
            cin>>cin;
            alice.push_back(cin);
            if (alice[i]==alice[i-1])
            {
                alice.erase(alice.begin()+i);
            }
            
        }else{
            cin>>cin;
            bia.push_back(cin);
            if (bia[i-a]==bia[i-a-1])
            {
                bia.erase(bia.begin()+i-a);
            }
            
        }
        
    }

    for ( int i = 0; i < n; i++)
    {
        if (bia[i]!=alice[i])
        {
            trocas++;
            bia.erase(bia.begin()+i);
            alice.erase(alice.begin()+i);
        }
        
        
    }

    cout<<trocas<<endl;
    
    
    



}