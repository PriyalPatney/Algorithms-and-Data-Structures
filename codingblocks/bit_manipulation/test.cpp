#include<bits/stdc++.h>
using namespace std;
//hackerrank
string arrangeStudents(vector<int> a, vector<int> b) {
sort(a.begin(),a.end());
    sort(b.begin(), b.end());
    // vector<int> result; add concept of last
    int b1 = 0, g1 = 0;
    int flag1 = 0;
    int flag2 = 0;
    while(b1<a.size() || g1 < b.size())
    {
        if(a[b1]<b[g1])
        {
            b1++;
            flag1 = 1;
            if(flag2 == 0)
            {
                flag2 = flag1;
                continue;
            }
            else if(flag2 == 2)
            {
                flag2 = flag1;
                continue;
            
            }
            else
                return "NO";
        }
        else if(a[b1]>b[g1])
        {
            g1++;
            flag1 = 2;
            if(flag2 == 0)
            {
                flag2 = flag1;
                continue;
            }
            else if(flag2 == 1)
            {
                flag2 = flag1;
                continue;
            
            }
            else
                return "NO";
        }
        else
        {
            if(flag2 == 1)
            {
                flag2 = 2;
                g1++;
            }
            else if(flag2 == 2)
            {
                flag2 = 1;
                b1++;
            }
        }
        
        
        
    }
}
int main()
{
    vector<int> a = {2,3,5};
    vector<int> b = {1,3,4};
    cout<<arrangeStudents(a,b);

    return 0;
}