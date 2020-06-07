#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0 ; i< n; i++)
    {
        string s;
        cin>>s;
        auto j = s.begin();
        while(*j != " ")
        {
            
        }
        cout<<s[j];
    }
    return 0;
}