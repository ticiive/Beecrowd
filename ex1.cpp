//INSERTION SORT

#include <iostream>
using namespace std;
void printar(int b[]){
    for (int i = 0; i < 5; i++)
    {
        cout<<b[i]<<"\n";
        
    }

}
int main() {

    int a[5] = {10,3,41,5,9};

    for (int i = 1; i < 5; i++)
    {
        int chave = a[i];
        int j = i - 1;
        while (j >= 0 && a[j]<chave)
        {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = chave;
        
    }
    printar(a);

    

}