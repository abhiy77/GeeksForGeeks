#include<iostream>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int count = 0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]==0) count++;
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0) cout<<arr[i]<<" ";
	    }
	    for(int i=0;i<count;i++){
	        cout<<"0"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
