#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp,sqr,a;
        cin>>temp;
        sqr = sqrt(temp);
        for(int j = sqr; j>=0; j--)
        {
            for(int k = 0; k<=j; k++)
            {
                a = (k*k) + (j*j);
                if(a == temp)
                {
                    cout<<"("<<k<<","<<j<<")"<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}