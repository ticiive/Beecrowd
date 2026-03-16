#include <iostream>
#include <vector>
#include <set>
#include <iterator>

using namespace std;

int main(){

    int trocas,a,b,n,ent,bi,ai,i,j;


while (true)
{
    i = 0;
    j=0;


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
    while (!bia.empty()||!alice.empty())
    {

        
        bi = *next(bia.begin(),i);
        ai = *next(alice.begin(),j);
        if (alice.count(bi)!=0)
        {
            i++;
            continue;
            bia.erase(bi);
            alice.erase(bi);
        }
        if (bia.count(ai)!=0)
        {
            j++;
            continue;
            bia.erase(ai);
            alice.erase(ai);
        }
        
        
        if (bi!=ai&&alice.count(bi)==0&&bia.count(ai)==0)
        {
            trocas++;
            continue;
            bia.erase(ai);
            alice.erase(bi);

        }
        
        
    }

    cout<<trocas<<endl;
    
    
}



}