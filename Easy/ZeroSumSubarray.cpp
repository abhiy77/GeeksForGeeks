#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	  int n,i,j,k=0,sum=0;
	  cin>>n;
	  int a[n];
	  
	  for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   for(i=0;i<n;i++)
	   {
	       sum=0;
	       for(j=i;j<n;j++)
	       {
	           sum+=a[j];
	           if(sum==0)
	           {
	            k=1;
	            break;
	           }
	       }
	       if(k==1)
	       {
	           cout<<"Yes"<<endl;
	           break;
	       }
	   }
	   if(k==0)
	   cout<<"No"<<endl;
	}  
 return 0;
}
