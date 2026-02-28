#include <iostream>


using namespace std;

int main(){
    string a,validador,caractere;

    while (true)
    {
        getline(cin,a);
        if (a == "*")
        {
            break;
        }
        
        
        for ( int i = 0; i < a.size(); i++)
        {
            if (a[i] == ' ')
            {
                if (toupper(a[i+1]) == toupper(a[0]))
                {
                    validador = "Y";
                }else{
                    validador = "N";
                    break;
                }
                
            }       
        }
        cout<<validador<<"\n";
        
    }
    
}