#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n; i>=0; i--)
    {
        int k = n-i;
        for(int j = n-i; j>0; j--)
        {
            cout<<"  ";
        }
        for(int j = i; j >=0; j--)
        {
            cout<<j<<" ";
        }
        for(int j = 1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    for(int i=1; i<=n; i++)
    {
        int k = n-i;
        for(int j = n-i; j>0; j--)
        {
            cout<<"  ";
        }
        for(int j = i; j >=0; j--)
        {
            cout<<j<<" ";
        }
        for(int j = 1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}