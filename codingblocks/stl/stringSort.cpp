#include<bits/stdc++.h>
using namespace std;
//use b.substr(0, a.size()) == a
bool cmp(string a, string b)
{
    int flag = 0;
    if(a.length() < b.length())
    {
        for(int j = 0; j<a.length(); j++)
        {
            if(a[j] == b[j])
            {
                flag = 0;
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
            
        }
        if(flag == 0)
        {
            return b.length() > a.length();
        }
    }
    else if(a.length() > b.length())
    {
        for(int j = 0; j<b.length(); j++)
        {
            if(a[j] == b[j])
            {
                flag = 0;
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
            
        }
        if(flag == 0)
        {
            return b.length() < a.length();
        }
    }
return a<b;
}

int main()
{
    int n;
    cin>>n;
    cin.get();
    string s[1000];

    for(int i=0;i<n;i++)
    {
        getline(cin, s[i]);
    }

    sort(s, s + n, cmp);
    for(int i = 0; i<n; i++)
    {
        cout<<s[i]<<"\n";
    }

    return 0;
}