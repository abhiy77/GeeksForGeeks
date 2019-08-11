import java.util.*;

class CountOfSmallerElements {
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t-->0){
		    int n = s.nextInt();
		    int [] arr = new int [n];
		    for(int i = 0 ; i < n ; i++)
		        arr[i] = s.nextInt();
		    int num = s.nextInt();
		    int count = 0;
		    for(int i=0;i<n;i++){
		        if(arr[i]<=num)
		            count++;
		        else
		            break;
		    }
		    System.out.println(count);
		}
	}
