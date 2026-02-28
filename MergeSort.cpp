// MERGE SORT
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void Merge(vector<int> &A, int p, int q, int r){

    int n1 = (q - p+1);
    int n2 = (r - q ); // -1

    vector<int> L(n1+1);
    vector<int> R(n2+1);

    for (int i = 0; i < n1; i++)
    {
        L[i] = A[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = A[q + j +1]; // -1
    }

    L[n1 ] = INT_MAX;
    R[n2 ] = INT_MAX;
    int i = 0;
    int j = 0;

    for (int k = p; k <= r; k++)
    {
        if (L[i]<=R[j])
        {
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        
    }   
}

void MergeSort(vector<int> &A,int p,int r){

    if (p<r)
    {
        int q = (p+r)/2;
        MergeSort(A,p,q);
        cout<<"primeiro sort"<<A[0]<<p<<q<<"\n";
        MergeSort(A,q+1,r);
        cout<<"Segundo sort"<<A[0]<<q<<r<<"\n";
        Merge(A,p,q,r);
        cout<<"merge"<<A[0]<<p<<q<<r<<"\n";
    }
}

int main() {
    vector<int> H = {49,80,2,34,1,2,4,5,4,6,3,6,4};
    
    MergeSort(H, 0, H.size()-1);

    for (int i = 0; i < H.size(); i++) {
        cout << H[i] << " ";
    }
    cout << endl;

    return 0;
}