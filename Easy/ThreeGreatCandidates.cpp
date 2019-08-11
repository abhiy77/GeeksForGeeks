#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum = 0;
	    int arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];
	    sort(arr,arr+n);
	    int max = INT_MAX;
	    for(int i=0;i<n;i++){
	        for(int j=i+2;j<n;j++){
	            sum = arr[i]*arr[i+1]*arr[j];
	            if(sum>max)max =sum; 
	        }
	    }
	    if(sum>arr[0]*arr[1]*arr[n-1]) cout<<sum<<endl;
	    else cout<<arr[0]*arr[1]*arr[n-1]<<endl;
	    
	}
	return 0;
}
