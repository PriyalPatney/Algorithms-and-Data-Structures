#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {3, 44,1,40,40,40,40,56,23,100};
    int size = sizeof(arr)/sizeof(int);
    int key = 40;
    //to find any element present
    auto it = find(arr, arr+size, key);
    //this will give the index..... if(it - arr == size) it means its not present
    cout<<(it - arr)<<endl;
    // lb, ub, binaryS all works on sorted array and in O(log n) time.
    // if the array is sorted use bool present = binary_search(start, end, key);
    //to get the index of the first occurance of the key use lower_bound(s,e,key)  (1st element that is >= key)
    //upper_bound(star,end,key) (1st element that is > key)
    //ub - lb will give the frequency of the key.
    sort(arr, arr +size);
    auto lb = lower_bound(arr, arr + size, key);
    auto ub = upper_bound(arr, arr + size, key);
    cout<<ub - lb;
    return 0;
}