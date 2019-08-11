/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The function should return the index of any
   peak element present in the array */
int peak(int arr[], int n)
{
   for(int i=0;i<n;i++){
       if(i==0){
           if(arr[i]>=arr[i+1]){
               return arr[i];
           }
       }
        else if(i==n-1){
           if(arr[i]>=arr[i-1]){
               return arr[i];
           }
       }
       else{
           if(arr[i]>=arr[i-1] && arr[i] >= arr[i+1]){
               return arr[i];
           }
       }
   }
}
