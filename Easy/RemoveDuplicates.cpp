/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/
// root: head node

Node *removeDuplicates(Node *root)
{
  Node * temp = root;
  
  while(temp->next!=NULL){
      if(temp->data == temp->next->data){
          temp->next = temp->next->next;
      }
      else{
          temp = temp->next;
      }
  }
  return root;
}
