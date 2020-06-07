#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int result = 0;
        cin >> a >> b;
        while (a <= b)
        {
            // result += __builtin_popcount(a);
            //following is another way
            int n = a;
            while(n>0)
            {
                n = (n & (n-1));
                result++;
            }
            a++;
        }
        cout<<result<<endl;
    }
    return 0;
}