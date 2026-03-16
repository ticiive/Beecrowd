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
    while (!bia.empty()&&!alice.empty())
    {

        
        bi = *bia.begin();
        ai = *alice.begin();
        if (alice.count(bi)!=0)
        {
            
            
            bia.erase(bi);
            alice.erase(bi);
            continue;
        }
        if (bia.count(ai)!=0)
        {
            
            
            bia.erase(ai);
            alice.erase(ai);
            continue;
        }
        
        
        if (bi!=ai&&alice.count(bi)==0&&bia.count(ai)==0)
        {
            trocas++;
            
            bia.erase(ai);
            alice.erase(bi);
            continue;

        }
        
        
    }

    cout<<trocas<<endl;
    
    
}



}