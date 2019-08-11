//User function Template for Java
// Helper class Geeks to implement 
// insert() and findFrequency()

class QueueOperations{
    
    // Function to insert element into the queue
    static void insert(Queue<Integer> q, int k){       
        q.add(k);  
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    static int findFrequency(Queue<Integer> q, int k){     
        return Collections.frequency(q,k);
    }
}
