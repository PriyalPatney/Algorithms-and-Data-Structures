#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>

using namespace std;
bool compare(string s1, string s2)
{
    if(s1.length() == s2.length())
        return s1 < s2;
    return s1.length() > s2.length();
}

int main()
{
    int n;
    cin>> n;
    cin.get();
    string s[100];

    for(int i=0;i<n;i++)
    {
        getline(cin, s[i]);
    }
    sort(s,s+n,compare);
    for(int i = 0; i<n; i++)
    {
        cout<<s[i]<<endl;
    }
    // following code is for string tokanizer
    char r[100] = "this is the end of rain";
    char *ptr = strtok(r, " ");
    cout<<ptr<<endl;    
    //to get the next tocken we have to pass null, as it maintains an internal structure array of all the tokens
    while(ptr != NULL)
    {
       ptr = strtok(NULL, " ");
       cout<<ptr<<endl;
    }

    return 0;
}