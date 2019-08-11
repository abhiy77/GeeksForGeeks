#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int m=2*n;
	    int a[m];
	    for(int i=0;i<m;i++){
	        cin>>a[i];
	    }
	    sort(a,a+m);
	    if(n>1){
	        for(int i=0;i<n;i++){
	            cout<<"("<<a[i]<<","<<a[m-1-i]<<")";
	        }
	        cout<<endl;
	    }
	    if(n==1){
	     for(int i=0;i<n;i++)
	     cout<<"("<<a[i]<<","<<a[i+1]<<")"<<endl;
	    }
	}
	return 0;
}
