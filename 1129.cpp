#include <iostream>
#include <vector>

using namespace std;

int main(){

int n,letra,preta,cont;
vector<string> a;
n = 1;
    while(n>0){
        cin>>n;

        for (int j = 0; j < n; j++)
        {
            a.push_back("0");
            preta = 0;
            cont++;
        
        for (int i = 0; i < 5; i++)
        {
            
            cin>>letra;

            if (letra <=127)
            {
                preta++;
                if (i==0)
                {
                   a.insert(a.begin() + cont, "A");
                }
                if (i==1)
                {
                    a.insert(a.begin() + cont, "B");
                }
                if (i==2)
                {
                    a.insert(a.begin() + cont, "C");
                }
                if (i==3)
                {
                    a.insert(a.begin() + cont, "D");
                }
                if (i==4)
                {
                    a.insert(a.begin() + cont, "E");
                }
            }
            if (i==4 && preta>1)
            {
                a.insert(a.begin() + cont, "*");
            }
            
        }
    }
    }

    for (int i = 0; i < cont; i++)
    {
        cout<<a[i]<<"\n";
    }
    





}