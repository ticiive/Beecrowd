#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n,nc,k,mortos,l,x;

    cin>>nc;

    for (int j = 1; j < nc+1; j++)
    {
        cin>>n>>k;
        vector<int> vec(n,0);
        int i = 1;
        l = 0;
        
        mortos = 0;
        
        while (mortos!=n-1)
        {
            if (i == n+1)
            {
                i =1 ;
                mortos++;
                cout<<mortos<<endl;

            }

            if (vec[i]==0)
            {
                vec[i] = 1;
                if (l==0)
                {
                    i = i+k-1;
                    vec[i] = 1;
                    mortos++;
                    i=i+k;
                    l++;
                    cout<<mortos<<endl;
                }else{
                    vec[i] = 1;
                    mortos++;
                    i=i+k;
                    l++;
                    cout<<mortos<<endl;

                }}
                

            
        }
        for (int i = 0; i < n; i++)
        {
            if (vec[0]==0)
            {
                x = i;
            }
            
        }
        
        cout<<"Case "<<j<<": "<<x-1<<endl;
        

        

    }
    
}