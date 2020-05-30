#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> cmp(n);
    unordered_map<int, int> mp;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]] = i;
    }

    cmp = a;
    sort(cmp.begin(), cmp.end(),greater<int>());
    int i = 0, j = 0,temp;
    while(k && i<n && j<n)
    {
        if(a[i] != cmp[j])
        {
            temp = a[i];
            a[i] = a[mp[cmp[j]]];
            a[mp[cmp[j]]] = temp;
            mp[temp] = mp[cmp[j]];
            mp[cmp[j]] = i;
            i++;
            j++;
            k--;
        }
        else
        {
            i++;
            j++;
        }
        
    }
    for(auto x: a)
    {
        cout<<x<<" ";
    }
    return 0;
}