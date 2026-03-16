#include <iostream>

using namespace std;

int main(){

    int h1,m1,h2,m2,minutos,horas;
    horas = 0;
    minutos = 0;

    cin>>h1>>m1>>h2>>m2;


    
    if (h1==h2)
    {
        if (m1<m2)
        {
            minutos = m2-m1;
        }else if (m1==m2)
        {

            horas = 24;
        }else
        {
            horas = 23;
            minutos = 60 - (m1-m2);
        }
        
    }else if(h1<h2){
        horas = h2-h1;
        if(m1<m2){
            minutos = m2-m1;
            
        }else if(m1>m2){
            minutos = 60 - (m1-m2);
            horas = horas - 1;
        }
        
    }else{
        horas = 24 - (h1-h2);
        if (m1<m2)
        {
            minutos = m2-m1;
        }else if(m2<m1){
            minutos = 60 - (m1-m2);
            horas = horas - 1;
        }
        
    }

    cout<<(horas*60)+minutos<<endl;
    
}