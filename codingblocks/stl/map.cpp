#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int> mp;
    mp.insert(make_pair("apple", 33));

    pair<string, int> p;
    p.first = "banana";
    p.second = 90;
    mp.insert(p);

    mp["orange"] = 87;
    return 0;
}