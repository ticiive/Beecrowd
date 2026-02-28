#include <iostream>
#include <vector>

using namespace std;

int main(){

int n,letra,preta,cont;
string resp;
vector<string> a;
n = 1;
    while(n>0){
        cin>>n;

        for (int j = 0; j < n; j++)
        {
            
            preta = 0;
            cont++;
            resp = "*";
        
        for (int i = 0; i < 5; i++)
        {
            
            cin>>letra;

            if (letra <=127)
            {
                preta++;
                if (i==0)
                {
                   resp = "A";
                }
                if (i==1)
                {
                    resp = "B";
                }
                if (i==2)
                {
                    resp = "C";
                }
                if (i==3)
                {
                    resp = "D";
                }
                if (i==4)
                {
                    resp = "E";
                }
            }
            if (i==4 && preta>1)
            {
                a.push_back("*");
            }else{
                if (i==4)
                {
                a.push_back(resp);
                    
                }  
            }
            
        }
    }
    }

    for (int i = 0; i < cont; i++)
    {
        cout<<a[i]<<"\n";
    }
    





}