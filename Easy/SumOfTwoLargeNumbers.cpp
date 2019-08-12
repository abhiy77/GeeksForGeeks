#include<bits/stdc++.h>
using namespace std;

string findSum(string x,string y)
{    
    int i=x.length()-1 , j=y.length()-1 , carry=0;
    
    string result="";
    
    while(i>=0 || j>=0)
    {
        int a=0,b=0;
        if(i>=0)
            a=x[i]-'0';
        if(j>=0)
            b=y[j]-'0';
        
        int sum= a+b+carry;
        result.push_back(sum%10+'0');
        
        carry=sum/10;
        
        i--;
        j--;
    }
    
    if(carry)
        result.push_back('1');
    
    if(result.length()==x.length()){
        reverse(result.begin(),result.end());
        return result;
    }
    else
        return x;
    
}

int main() {
    
    int t;
    string str1,str2;
    
    cin>>t;
    
    while(t--)
    {
        cin >> str1 >> str2;
        cout << findSum(str1,str2) << endl;
    }
	return 0;
}
