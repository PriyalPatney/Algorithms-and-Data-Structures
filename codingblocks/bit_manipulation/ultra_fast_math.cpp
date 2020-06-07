#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0; i< n; i++)
    {
        string s;
        getline(cin,s);
        int j = 0;
        int p = 1;
        int x = 0;
        int z = 0;
        int result = 0;
        while(s[j] != ' ')
        {
            int temp = (s[j] & 1);
            x += temp * p;
            p = p<<1;
            
        }
    }
    return 0;
}