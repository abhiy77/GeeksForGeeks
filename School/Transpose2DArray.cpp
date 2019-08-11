#include<iostream>
using namespace std;

int main() {
	int t, m, j,k,i;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>m;
	    int a[m][m], b[m][m];
	    
	    for(j=0;j<m;j++){
	        for(k=0;k<m;k++){
	            cin>>a[j][k];
	        }
	    }
	    
	    for(j=0;j<m;j++){
	        for(k=0;k<m;k++){
	            b[j][k]=a[k][j];
	        }
	    }
	    
	    for(j=0;j<m;j++){
	        for(k=0;k<m;k++){
	           cout<< b[j][k]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
