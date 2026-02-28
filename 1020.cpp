#include <iostream>

using namespace std;

int main(){

int dias,meses,anos;
cin>>dias;
anos = 0;
meses = 0;
if (dias>=365)
{
    anos = dias/365;
    dias = dias - (anos*365);
    
}
if (dias>=30)
{
    meses = dias/30;
    dias = dias - (meses*30);
}

cout<<anos<<" ano(s)\n"<<meses<<" mes(es)\n"<<dias<<" dia(s)\n";

return 0;






}