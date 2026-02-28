#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int valor,cem,cinqt,vinte,dez,cinc,dois,m1,m50,m25,m10,m5,m01,moedas;
    cem = 0,cinqt=0,vinte=0,dez=0,cinc=0,dois=0,m1 = 0, m50=0,m25=0,m10=0,m5=0,m01=0;
    double total;
    cin>>total;
    valor = (int)total;
    moedas = (total - valor)*100;

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
        m1 = valor/1;

    }

    //moedas

    if (moedas>=50)
    {
        m50 = moedas/50;
        moedas = moedas - (m50*50);
    }
    if (moedas>=25)
    {
        m25 = moedas/25;
        moedas = moedas - (m25*25);
    }
    if (moedas>=10)
    {
        m10 = moedas/10;
        moedas = moedas - (m10*10);
    
    }
    if (moedas>=5)
    {
        m5 = moedas/5;
        moedas = moedas - (m5*5);
    }
    if (moedas>=1)
    {
        m01 = moedas/1;
    }
    
    
    
    
    

    cout<<"NOTAS:\n"<<cem<<" nota(s) de R$ 100,00\n"<<cinqt<<" nota(s) de R$ 50,00\n"<<vinte<<" nota(s) de R$ 20,00\n"<<dez<<" nota(s) de R$ 10,00\n"<<cinc<<" nota(s) de R$ 5,00\n"<<dois<<" nota(s) de R$ 2,00\nMOEDAS:\n"<<m1<<" moeda(s) de R$ 1.00\n"<<m50<<" moeda(s) de R$ 0.50\n"<<m25<<" moeda(s) de R$ 0.25\n"<<m10<<" moeda(s) de R$ 0.10\n"<<m5<<" moeda(s) de R$ 0.05\n"<<m01<<" moeda(s) de R$ 0.01\n";
    





}