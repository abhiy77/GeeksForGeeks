/*
structure of the node of the linked list is
struct Node
{
	int data;
	struct Node *next;
};
*/
// complete this function
void mergeList(struct Node **p, struct Node **q){
    Node *h1 = *p, *h2 = *q;
    while(h1 && h2){
        Node *t = h1;
        h1 = h1->next;
        t->next = h2;
        t = t->next;
        h2 = h2->next;
        t->next = h1;
    }
    *q = h2;
}
