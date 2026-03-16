#include <iostream>

using namespace std;

int main(){
    double otavio,bruno,ian;
    cin>>otavio>>bruno>>ian;
    string vencedor;

    if (otavio<bruno && otavio<ian)
    {
        vencedor = "Otavio";
    }else if(bruno<otavio && bruno<ian){
        vencedor = "Bruno";
    }else if(ian<otavio && ian<bruno){
        vencedor = "Ian";
    }else{
        vencedor = "Empate";
    }

    cout<<vencedor<<endl;
    
}