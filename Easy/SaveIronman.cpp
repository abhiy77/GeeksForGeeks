#include<bits/stdc++.h>
using namespace std;
int test()
{
        string str;
        getline(cin, str);

        char * s = const_cast<char *>(str.c_str());
        int len=strlen(s);

        int i=0;
        int j=len-1;

        while(i<len&&j>=0)
        {
                char left=s[i];
                if (! isalnum(left))  { i++; continue; }

                char right=s[j];
                if (! isalnum(right))  { j--; continue; }

                left=tolower(left);
                right=tolower(right);
                if ( left != right ) return 0;

                i++; j--;
        }

        if ( i<len || j>=0)
                return 0;

        return 1;
}

int main()
{
        int i;
        cin >> i;
        cin.ignore();

        while(i--) 
            if(test()==1) cout <<"YES\n"; 
            else cout <<"NO\n";
}
