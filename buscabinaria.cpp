#include <iostream>

using namespace std;

int vec[5];

int binario(int x,int i,int f){
    if (f<i)
    {
        return -1;
    }
    int meio = (f+i)/2;

    

    if (vec[meio]==x)
    {
        return meio;
    }else if(vec[meio]>x)
    {
        return binario(x,i,meio-1);
    }else {
        return binario(x,meio+1,f);
    }
    
}

int main(){

    int a = 12;

    for (int i = 0; i < 5; i++)
    {
        cin>>vec[i];
    }
    

    cout<<binario(12,0,4)<<endl;
}