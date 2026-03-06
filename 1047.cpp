
#include <iostream>

using namespace std;

int main(){

    int hi,mi,hf,mf,h,m;
    cin>>hi>>mi>>hf>>mf;
   

    if (hi==hf)
    {
        h = 24;
    }else if (hi<hf)
    {
        h = hf-hi;
    }else if(hi>hf){
        h= (24-hi) + hf;
    }

    if (mi==mf)
    {
        m = 0;
    }else if (mi<mf)
    {
        m = mf-mi;
        
    }else if(mi>mf){
        m = (60-mi)+mf;
        h = h -1;}
        
        
        
        
        


    if (hi==hf && mi<mf)
    {
            h=0;
    }
        
        
    
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<m<<" MINUTO(S)\n";
    
    
    
}