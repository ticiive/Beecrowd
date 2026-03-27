#include <iostream>

using namespace std;

int main(){
    int t,n,m;

    cin>>t;

    for ( int i = 0; i < t; i++)
    {
        
    cin>>n>>m;
    int v[n],pd[m];
    pd[0] = 1;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];

    }
    
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (j==0)
            {
               pd[i] = 999999;
            }
            
            if (v[j]==i+1)
            {
                pd[i]=min(pd[i],pd[i-v[j]]);
            //cout<<"pd["<<i+1<<"] = "<<pd[i]<<endl;
            }else if (v[j]<i+1)
            {
            pd[i]=min(pd[i],pd[i-v[j]]+1);
            //cout<<"pd["<<i+1<<"] = "<<pd[i]<<endl;
            }
            

        }
        
    }
    cout<<pd[m-1]<<endl;
}
}