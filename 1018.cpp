#include <iostream>

using namespace std;

int main(){

    int total,valor,cem,cinqt,vinte,dez,cinc,dois,um;
    cem = 0,cinqt=0,vinte=0,dez=0,cinc=0,dois=0,um=0;
    cin>>total;
    valor = total;

    if (valor>=100)
    {
        cem = valor/100;
        valor = valor - (cem*100);
    }
    if (valor>=50)
    {
        cinqt = valor/50;
        valor = valor - (cinqt*50);
    }
    if (valor>=20)
    {
        vinte = valor/20;
        valor = valor - (vinte*20);
    }
    if (valor >=10)
    {
        dez = valor/10;
        valor = valor-(dez*10);
    }
    if (valor >=5)
    {
        cinc = valor/5;
        valor = valor - (cinc*5);
    }
    if (valor >=2)
    {
        dois = valor/2;
        valor = valor- (dois*2);
    }
    if (valor>=1)
    {
        um = valor/1;

    }

    cout<<total<<"\n"<<cem<<" nota(s) de R$ 100,00\n"<<cinqt<<" nota(s) de R$ 50,00\n"<<vinte<<" nota(s) de R$ 20,00\n"<<dez<<" nota(s) de R$ 10,00\n"<<cinc<<" nota(s) de R$ 5,00\n"<<dois<<" nota(s) de R$ 2,00\n"<<um<<" nota(s) de R$ 1,00\n";
    
    
    
    
    
    
    





}