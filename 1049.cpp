#include <iostream>


using namespace std;

int main(){
    string p1,p2,p3,res,aux;
    cin>>p1>>p2>>p3;
    aux = p1+p2+p3;


    

    if (aux.find("carnivoro") != string::npos)
    {
        res = "aguia";
    }else{
        if (aux.find("onivoro") != string::npos){
            if (aux.find("ave") != string::npos){
                res="pomba";
            }
            if (aux.find("mamifero") != string::npos){
                res="homem";
            }
            if (aux.find("anelideo") != string::npos){
                res="minhoca";
            }   
        }else{
            if (aux.find("herbivoro") != string::npos){
                if (aux.find("mamifero") != string::npos){
                    res = "vaca";
                }
                if (aux.find("inseto") != string::npos){
                    res="lagarta";
                }
            }else{
                if (aux.find("inseto") != string::npos){
                    res = "pulga";
                }else{
                    res = "sanguessuga";
                }

                
        }
    }
}
    
    cout<<res<<"\n";
    



}