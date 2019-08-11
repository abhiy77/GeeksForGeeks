/* The structure of linked list is the following
class Node
{
    int data;
    Node next;
    Node(int d) {
        data = d; 
        next = null;
    }
}
*/
class RemoveDuplicates
{
    // Function to remove duplicates from the given linked list
    Node removeDuplicates(Node head)
        {
        // Your code here
        ArrayList<Integer> list = new ArrayList<Integer>(); 
        if(head.next == null) return head;
        list.add(head.data);
        Node prev = head;
        Node curr = head.next;
        while(curr!=null){
            if(list.contains(curr.data)){
                prev.next = curr.next;
            }
            else{
                list.add(curr.data);
                prev = curr; 
            }
        curr = curr.next;
        }
        return head; 
        }
}
