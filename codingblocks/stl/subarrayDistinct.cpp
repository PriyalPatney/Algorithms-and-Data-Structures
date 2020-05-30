#include<bits/stdc++.h>
using namespace std;
// here we use the concept of free moving pointer
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> length;
    set<int> s;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int a = 0, b = 0;
    //here a is the free pointer
  while(a < n || b < n)
    {
        if(s.find(arr[a]) == s.end() && a<n)
        {
            s.insert(arr[a]);
            a++;
        }
        else
        {
            length.push_back(a-b);
            s.erase(s.find(arr[b]));
            b++;
        }
        
    }
    int result = 0;
    for(auto x: length)
    {
        result += (x * (x+1)) /2 ;
    }
    cout<<result;
    return 0;
}