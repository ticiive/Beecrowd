#include <iostream>
#include <cmath>

using namespace std;

int main(){

float a,b,c,aux;
cin>>a>>b>>c;
float d[3];
d[0] = a, d[1] = b, d[2] = c;

for (int i = 0; i < 3; i++)
{
    for (size_t j = 0; j < 3; j++)
    {
        if (d[i]>d[j])
        {
            aux = d[i];
            d[i] = d[j];
            d[j] = aux;
        }
        
    }
    
}
a = d[0], b = d[1],c= d[2];
if (a>=b+c)
{
    cout<<"NAO FORMA TRIANGULO\n";
}else{
    if (a*a==b*b+c*c)
    {
        cout<<"TRIANGULO RETANGULO\n";
    }else if (a*a>b*b+c*c)
    {
        cout<<"TRIANGULO OBTUSANGULO\n";
    }else{
        cout<<"TRIANGULO ACUTANGULO\n";
    }
    if (a==b && b==c)
    {
        cout<<"TRIANGULO EQUILATERO\n";
    }else{
        if (a==b | b==c | c==a)
        {
            cout<<"TRIANGULO ISOSCELES\n";
        }
        
    }

    
    
    
    
}






}