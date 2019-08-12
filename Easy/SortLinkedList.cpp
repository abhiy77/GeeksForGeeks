/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     Node *next;
  }
*/
// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links

Node* segregate(struct Node *head)
{
    int zeros=0,ones=0,twos=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
            zeros++;
        else if(temp->data==1)
            ones++;
        else
            twos++;
        temp=temp->next;
    }
    temp=head;
    while(zeros || ones || twos)
    {
        while(zeros)
        {
            temp->data=0;
            temp=temp->next;
            zeros--;
        }
        while(ones)
        {
            temp->data=1;
            temp=temp->next;
            ones--;
        }
        while(twos)
        {
            temp->data=2;
            temp=temp->next;
            twos--;
        }
    }
    return head;
}
