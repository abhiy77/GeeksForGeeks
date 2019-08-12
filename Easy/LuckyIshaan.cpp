#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(string str){
    int sum=0;
    for(int i=0;i<str.length();i++){
        sum+= str[i] - '0';
    }
    return sum;
}

int main() {
	int t,n;
	cin >> t;
	while(t--){
	    cin >> n;
	    int count =0;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        string str ;
	        cin >> str;
	        int x = sumOfDigits(str);
	        if(find(v.begin(),v.end(),x) == v.end()){
	            v.push_back(x);
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
