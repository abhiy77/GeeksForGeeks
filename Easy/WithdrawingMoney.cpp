#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    int num_days=1;
	    while(n!=1)
	    {
	        int flag=0;
	        for(int i=2;i<=sqrt(n);i++)
	        {
	            if(n%i==0)
	            {
	                flag=1;
	                n=n-n/i;
	                break;
	            }
	        }
	        if(flag==0)
	               n--;
	        
          num_days++;
	    }
	    cout<<num_days<<endl;
	}
	return 0;
}
