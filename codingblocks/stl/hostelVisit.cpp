#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k,temp,x,y,result;
    cin>>n>>k;
    priority_queue<long long int> s;
    for(int i=0; i<n ;i++)
    {
        cin>>temp;
        if(temp == 1)
        {
            cin>>x>>y;
            result = pow(x,2) + pow(y,2);
            s.push(result);
            if(s.size() > k)
                s.pop();
        }
        else if(temp == 2)
        {
            cout<<s.top()<<"\n";
        }
    }

    return 0;
}