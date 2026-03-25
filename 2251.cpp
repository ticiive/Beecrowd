#include <iostream>

using namespace std;

int movimentos;

int hanoi(int n){
    if (n == 1)
    {
        movimentos++;
    }else{
        hanoi(n-1);
        movimentos++;
        hanoi(n-1);
    }
    return 0;
    
}
int main(){

    int x,i;
    i=1;
    while (true)
    {
        cin>>x;
        if (x==0)
        {
            break;
        }
        
        movimentos = 0;
        hanoi(x);
        cout<<"Teste "<<i<<endl<<movimentos<<endl<<endl;
        i++;
        
    }
    

}