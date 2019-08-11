//User function Template for Java
/* Helper class containing function SortedDuplicates
containg arguments
arr[]: the duplicated array
n: size of the array
*/
class DuplicateElements
{
    // print the elements which appear more than
    // once in the array in sorted order
    public static void SortedDuplicates(int arr[], int n)
    {
        //Your code here
        TreeMap<Integer,Integer> t=new TreeMap<Integer,Integer>();
        for(int i=0;i<n;i++){
            Integer k=t.get(arr[i]);
            if(t.get(arr[i])==null){
            t.put(arr[i],1);
            }else{
                t.put(arr[i],++k);
            }
        }
        int count=0;
        Set<Map.Entry<Integer,Integer>> s=t.entrySet();
            for (Map.Entry<Integer,Integer> m:s){
                if(m.getValue()>1){
                    count++;
                    System.out.print(m.getKey()+" ");
                }
            }
            if(count==0){
                System.out.print("-1");
            }
        
     }
    
}
   
