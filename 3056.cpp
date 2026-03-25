#include <iostream>

using namespace std;

int main(){
    long n,pontos,incremento,borda;

    cin>>n;

    pontos = 4;
    incremento = 1;
    borda = 2;
    for (int i = 0; i < n; i++)
    {
        
    borda = borda+incremento;
      incremento = incremento*2;
      
      
      
      
      //cout<<borda<<endl;
      pontos = borda*borda;
        
    }
    cout<<pontos<<endl;
    
}