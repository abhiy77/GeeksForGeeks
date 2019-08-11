//User function Template for Java
/* Helper class containing sumExists function
arr[]: array eleemnts
n: size of the array
sum: to check if pair having this sum
*/
class PairSumRevisited
{
    // function to check if any pair having specified sum
    // and return 1 if so, else 0
    public static int sumExists(int arr[], int n, int sum)
    {
        // your code here
        HashMap<Integer,Integer> hs=new HashMap<Integer,Integer>();
        for(int i=0;i<n;i++)
        {
            if(!hs.containsKey(arr[i]))
                hs.put(arr[i],1);
            else
                hs.put(arr[i],hs.get(arr[i])+1);
            
        }
        for(int i=0;i<n;i++)
        {
            int num=sum-arr[i];
            if(num!=arr[i] && hs.containsKey(num))
               {
                   return 1;
               }
             else if(num==arr[i] && hs.get(num)>1)
                return 1;
        }
        return 0;
    }
}
