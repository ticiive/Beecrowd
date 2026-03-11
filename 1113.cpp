#include <iostream>

using namespace std;

int main(){

    int x,y;

    while (true)
    {
        cin>>x>>y;

        if (x==y)
        {
            break;
        }

        if (x>y)
        {
            cout<<"Decrescente\n";
        }else{
            cout<<"Crescente\n";
        }
        
        
    }
    
}