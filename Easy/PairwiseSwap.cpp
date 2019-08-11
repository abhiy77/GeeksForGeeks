/*
  Pairwise swap a linked list
  The input list will have at least one element  
  node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
    void pairWiseSwap(struct node *head)
    {
    // The task is to complete this method
    struct node* temp;
    temp=head;
    int x;
    while(temp!=NULL && temp->next != NULL) {
          x=temp->data;
          temp->data=(temp->next)->data;
          (temp->next)->data=x;
          temp=(temp->next)->next;
    }
    return temp;
    }
