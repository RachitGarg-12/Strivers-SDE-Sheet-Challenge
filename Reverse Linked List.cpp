LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{   
    if(head==NULL){return  head;}
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *cur=head;
    while(cur){
        LinkedListNode<int> *temp=cur->next;
        cur->next=prev;
        prev=cur;cur=temp;
    }
    return prev;
}