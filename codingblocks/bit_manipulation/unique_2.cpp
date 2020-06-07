#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int result = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        result = (result ^ arr[i]);
    }
    int temp = result;
    int pos = 0;
    while((temp & 1) != 1 )
    {
        pos++;
        temp = temp>>1;
    }
    int mask = (1<<pos);
    temp = 0;
    for(auto x: arr)
    {
        if((mask & x) == mask)
            temp = (temp ^ x);       
    }
    
    result = (result ^ temp);
    cout<<min(result, temp)<<" "<<max(result,temp);

    return 0;
}