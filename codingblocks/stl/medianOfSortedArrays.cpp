#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,result;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n+n);
    for(int i = 0; i<n; i++)
        cin>>a[i];
    for(int i = 0; i<n; i++)
        cin>>b[i];
    int i = 0, j = 0,k=0;
    while(i<n || j<n)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    result = (c[n] + c[n-1]) / 2;
    cout<<result<<endl;

    return 0;
}