#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
      int n,k;
      cin >> n >> k;
	    int min=INT_MAX;
	    int max=INT_MIN;
      
	    unordered_map<int,int> map;
	    for(int j=0;j<n;j++){
	        int temp;
	        cin>>temp;
	       map[temp]++;
	        if(temp<min){
	            min=temp;
	        }
	        if(temp>max){
	            max=temp;
	        }
	    }
	    int count=0;
	    int flag=0;
	    for(int j=min;j<=max;j++){
	        if(map[j]==0){
	            count++;
	            if(count==k){
	                cout<<j<<"\n";
	                flag=1;
	                break;
	            }
	        }
	    }
	    if(flag==0){
	        cout<<"-1\n";
	    }
	}
	return 0;
}
