#include<bits/stdc++.h>
#include <boost/lexical_cast.hpp>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans=INT_MAX;
        for (int i = 0; i < n; i++) {      
            stringstream s;
            s << a[i];
            string str = s.str();
            reverse(str.begin(),str.end());
            a[i] = boost::lexical_cast<int>(str);  
    }
    sort(a,a+n);

    for (int i=1;i<n;i++)
        ans = min(ans, abs(a[i]-a[i - 1]));
    cout<<ans<<endl;
    }
	return 0;
}
