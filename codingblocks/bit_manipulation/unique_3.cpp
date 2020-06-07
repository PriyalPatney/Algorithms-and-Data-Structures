#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    vector<int> sum(64,0);
    for(int i = 0; i< n; i++)
    {
        cin>>temp;
        int j = 0;
        while(temp)
        {
            if(temp & 1 == 1)
                sum[j]++;
            j++;
            temp = temp>>1;
        }
    }
    int p = 1;
    int result = 0;
    for(int i = 0; i<64; i++)
    {
        sum[i] %= 3;
        result += sum[i] * p;
        p = p<<1;
    }
    cout<<result;
    return 0;
}