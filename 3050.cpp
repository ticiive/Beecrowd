#include <iostream>

using namespace std;

int main(){
    int n,a,p,b,x,soma;
    cin>>n;
    int andares[n];
    soma = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>andares[i];
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n-1; j++)
      {
        a = andares[i];
        if (i>j)
        {
            p = i-j;
        }else{
            p=j-i;
        }
        b = andares[j];

        if (a+p+b>soma)
        {
            soma = a+p+b;
        }
        
        
      }
      
        
    }
    cout<<soma<<endl;
    
}