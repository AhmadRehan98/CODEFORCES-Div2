#include <iostream>

using namespace std;

int main()
{
    int na,nb,k,m;
    cin>>na>>nb>>k>>m;
    int A[na];
    int B[nb];
    int Ao[k];
    int Bo[m];
    for (int i = 0; i<na; i++)
    {
        cin>>A[i];
    }
    for (int j=0; j<nb; j++)
    {
        cin>>B[j];
    }
    for (int a=0; a<k; a++)
    {
        Ao[a] = A[a];
    }
    for (int b=0; b<m; b++)
    {
        Bo[b] = B[nb-m];
    }
    if (Ao[k-1] < Bo[0])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
