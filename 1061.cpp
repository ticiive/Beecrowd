#include <iostream>

using namespace std;

int main(){

    string str;
    int diainicio,diafim,horainicio,horafim,mininicio,minfim,seginicio,segfim;
    int dias,horas,min,seg;
    cin>>str>>diainicio>>horainicio>>str>>mininicio>>str>>seginicio>>str>>diafim>>horafim>>str>>minfim>>str>>segfim;

    if (horafim>horainicio)
    {
         dias = diafim - diainicio;
         horas= horafim-horainicio;
    }else{
        if (horainicio==horafim)
        {
            horas = 0;
            dias = diafim-diainicio;
        }else{
        
        dias = diafim-diainicio-1;
        horas = 24 - (horainicio-horafim);}
    }
    if (mininicio<minfim)
    {
        min = minfim-mininicio;
    }else{
        if (mininicio==minfim)
        {
            min = 0;
        }else{
        
        min = 60 - (mininicio-minfim);
        if (horas == 0)
        {
            horas = 23;
            dias = dias -1;
        }else{
        
        horas = horas - 1;}
    }}
    if (seginicio<segfim)
    {
        seg = segfim - seginicio;
    }else{
        if (seginicio == segfim)
        {
            seg = 0;
        }else{
            min = min - 1;
            seg = 60-(seginicio-segfim);
        }

        
        
    }

    
    cout<<dias<<" dia(s)\n"<<horas<<" hora(s)\n"<<min<<" minuto(s)\n"<<seg<<" segundo(s)\n";
    
    
   
    
}