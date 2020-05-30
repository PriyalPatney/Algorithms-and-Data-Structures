#include<iostream>

using namespace std;

int main()
{
    unsigned long long int n,m;
    unsigned long long int max, min;
    cin>>n>>m;
    max = (m-1);
    max = n - max;
    max = max * (max - 1) / 2;
    min = n/m;
    min = min * (min - 1) / 2;
    cout<< min<<" "<<max;
    return 0;
}