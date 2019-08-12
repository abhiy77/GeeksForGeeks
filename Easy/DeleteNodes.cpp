/*
Delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void linkdelete(struct node  *head, int M, int N)
{   
    struct node* temp=head;
    while(temp!=NULL)
    {
        for(int i=0;i<M-1&& temp->next!=NULL;i++)
                temp=temp->next;
        struct node* t=temp;
        for(int i=0;i<=N-1&& t->next!=NULL;i++)
                t=t->next;
        temp->next=t->next;
        temp=t->next;
    }
}
