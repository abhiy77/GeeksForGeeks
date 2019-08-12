#include<bits/stdc++.h>
using namespace std;
 
int findStoringCapacity(int arr[], int n)
{
    // left[i] contains height of tallest bar to the left of i'th bar including itself
    int left[n];
 
    // Right [i] contains height of tallest bar to the right of ith bar including itself
    int right[n];
 
    // Initialize result
    int stored_water = 0;
 
    // Fill left array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
       left[i] = max(left[i-1], arr[i]);
 
    // Fill right array
    right[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--)
       right[i] = max(right[i+1], arr[i]);
 
    // Calculate the accumulated water element by element
    for (int i = 0; i < n; i++)
       stored_water += min(left[i],right[i]) - arr[i];
 
    return stored_water;
}
 
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    int arr[n] ;//= {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int i;
    for(i=0;i<n;i++)
    cin>>arr[i];
    cout << findStoringCapacity(arr, n)<<endl;
    }
    return 0;
}
