/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//  Utility method to construct left and right array
long long int preprocess(long long int arr[],long long int N,long long int left[],long long int right[])
{
// Your code here to preprocess the array
    left[0]=0;
    right[N-1]=N-1;
    for(int i=1;i<N;i++)
    {
        if(arr[i]>arr[i-1])
        {
            left[i]=i;
        }
        else
        {
            left[i]=left[i-1];
        }
    }
    for(int j=N-2;j>=0;j--)
    {
        if(arr[j]>arr[j+1])
        {
            right[j]=j;
        }
        else
        {
            right[j]=right[j+1];
        }
    }
}
//  method returns true if arr[L..R] is in mountain form
bool isSubarrayMountainForm(long long int arr[],long long int left[],
                             long long int right[], long long int L,long long int R)
{
// Your code here to return Yes or No for subarray to be in mountain form.
    if(right[L]>=left[R])
    {
        return true;
    }
    else
    {
        return false;
    }
}
