#include <iostream>

using namespace std;

int main(){
int n,fibonat[100000]={0},x,iterator,num;

cin>>n;
int fibonot[n];
num = 0;

fibonat[1]=1;
x =2;

for (int i = 2; i < 50; i++)
{
    x++;
    if (fibonat[i]!=0)
    {
        continue;
        
    }else{
        fibonat[i] = fibonat[i-1] + fibonat[i-2];
        
    }
}
for (int i = 0; i < x; i++)
{
    iterator = 0;
    for (int  j = 0; j < x; j++)
    {
        
        if (i == fibonat[j])
        {
            iterator = 1;
            break;
        }else if (i<fibonat[j])
        {
            break;
        }else{
            continue;
        }
        
    }
    if (iterator==0)
    {

        cout<<i<<endl;
        fibonot[num] = i;
        num++;
    }
    
    
    
}
cout<<num<<endl;
cout<<fibonot[n]<<endl;



}