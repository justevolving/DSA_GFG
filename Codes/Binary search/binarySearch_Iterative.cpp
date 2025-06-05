#include<iostream>
#include<vector>
using namespace std;


bool BinarySearch(const vector<int> &v , int x)
{
    int n = v.size();
    int high = n-1;
    int low = 0;

    while(low <= high)
    {
        int mid = (high + low) / 2;
        if(v[mid] == x)
            return true;
        else if(v[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;

}

int main()
{
    vector<int> v = {10, 20, 45, 56, 76, 77, 89, 93};
    int x = 99;
    // cin>>x;

    if(BinarySearch(v , x))
        cout<<"The element "<<x<<" is present in the array";
    else
        cout<<"The element "<<x<<" is not present in the array";

    return 0;
}