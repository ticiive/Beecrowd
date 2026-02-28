#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    int horas,min,seg;
    cin>>seg;
    horas = 0;
    min = 0;

    if (seg>=60)
    {
        min= seg/60;
        seg = seg - (min*60);
    }
    if (min>=60)
    {
        horas = min/60;
        min = min - (horas*60);
    }

    cout<<horas<<":"<<min<<":"<<seg<<"\n";
    

 
    return 0;
}