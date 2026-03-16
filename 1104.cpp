#include <iostream>
#include <vector>
#include <set>
#include <iterator>

using namespace std;

int main(){

    int trocas,a,b,n,ent;


while (true)
{
    


    cin>>a>>b;
    if (a==0&&b==0)
    {
        break;
    }
    
    trocas = 0;

    set<int> bia,alice;
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
            cin>>ent;
            alice.insert(ent);
 
            
        }else{
            cin>>ent;
            bia.insert(ent);

            
        }
        
    }



    if (alice.size()<bia.size())
    {
        n = alice.size();
    }else{
        n = bia.size();
    }
    for ( int i = 0; i < n; i++)
    {
        if (next(bia.begin(),i)!=next(alice.begin(),i))
        {
            trocas++;

        }
        
        
    }

    cout<<trocas<<endl;
    
    
}



}