#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{
    for(int i=0;i<str.length()/2;i++)
    {
        if(str[i] != str[str.length()-i-1])
          return false;
    }
    return true;
}
int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    string str="";
	    int sum=0;
	    while(n>0)
	    {
	        int y=n%10;
	        sum=sum+y;
	        char x=(n%10)+97;
	        str=x+str;
	        n=n/10;
	    }
	    string str2="";
	    int len=str.length();

	    for(int i=0;i<sum;i++)
	    {
	        str2+=str[i % len];
	    }

	    if(isPalindrome(str2))
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
