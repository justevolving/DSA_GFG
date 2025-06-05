#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &v, int high, int low, int x)
{
    if(high < low)
        return -1;

    int mid = (high + low) / 2;

    if(v[mid] == x)
        return mid;
    else if(v[mid] > x)
        return BinarySearch(v , mid - 1, low, x);
    else
        return BinarySearch(v , high, mid+1, x);
}

int main()
{
    vector<int> v = {10, 20, 45, 56, 76, 77, 89, 93};
    int x = 89;
    // cin>>x;
    int n = v.size();
    int indx = BinarySearch(v ,n-1, 0, x);

    cout<<indx;
        

    return 0;
}