#include<iostream>
using namespace std;

int main(){
    int n,temp;
    cin>>n;
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
       cin>>temp;
       ans = ans ^ temp; 
    }
    cout<<ans;
    return 0;
}