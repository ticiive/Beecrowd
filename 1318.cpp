#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,m,entrada,falsos,ite;
    falsos = 0;
    n=1;
    m=1;

    
    while(n!=0||m!=0){

        cin>>n>>m;
        vector<int> vec(m,0);

        for (int i = 0; i < m; i++)
        {
            cin>>vec[i];
            
        }
        for (int i = 0; i < vec.size(); i++)
        {
            for (int j= 0; j < vec.size(); j++)
            {
                if (i!=j)
                {
                
                if (vec[i]==vec[j])
                {
                    vec.erase(vec.begin()+i);
                    vec.erase(vec.begin()+j);
                    
                    i=i-1;
                    j=j-1;
                    falsos++;

                }}
                
            }
            
        }
        
        cout<<falsos<<endl;
        


    }
}

