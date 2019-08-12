#include <iostream>
using namespace std;

int calculate(int arr[] ,int n,int num){
     for(int i=0;i<n-3;i++){
	        for(int j=i+1;j<n-2;j++){
	            for(int k=j+1;k<n-1;k++){
	                for(int l=k+1;l<n;l++){
	                    if(arr[i]+arr[j]+arr[k]+arr[l] == num){
	                        return 1;
	                    }
	                }
	            }
	        }
	    }
	    return 0;
    
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n,num;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++) cin >> arr[i];
	    cin >> num;
	    cout << calculate(arr,n,num) << endl;
	}
	return 0;
}
