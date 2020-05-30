#include<iostream>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        int result = 0;
        while(temp >= 0)
        {
            int num = temp;
            int flag = 0;
            while(num > 0)
            {
                if((num & 3) == 3)
                {
                    flag = 1;
                    break;
                }
                num = num >> 1;
            }
            if(flag == 0)
                result++;
            temp--;
        }
        cout<<result<<" ";
    }
    return 0;
}