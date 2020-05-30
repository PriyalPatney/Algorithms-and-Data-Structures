#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> d;
    d.reserve(100);
// this will prevent the underlaying doubling action of the vector and set a max size
    for(int i=0; i<3;i++)
    {
        d.push_back(i);
        cout<<d.capacity()<<endl;
    }
    d.insert(d.begin() + 1, 4, 100);
    for(auto x: d)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    d.erase(d.begin() +1, d.begin() + 3);
    d.clear();
    if(d.empty())
    {
        cout<<"this is the end";
    }
    
    return 0;
}