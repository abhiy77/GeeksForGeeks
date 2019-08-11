/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below*/
#include<bits/stdc++.h>
using namespace std;
int PalinArray(int a[], int n)
{ 
    for(int i=0;i<n;i++){
        int number=a[i];
        int rev=0,rem=0;
        while(number>0){
            rem = number%10;
            number = number/10;
            rev = rev *10 + rem;
        }
        if(rev !=a[i]){
            return 0;
        }
    }
  return 1;
}
