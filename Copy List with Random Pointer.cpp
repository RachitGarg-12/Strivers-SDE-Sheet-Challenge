    if(head==NULL){return NULL;}
    Node *nhead=new Node(head->data);
    Node *temp=nhead;
    while(head){
      if(head->next){
        temp->next = new Node(head->next->data);
      }
      else{
          temp->next=NULL;
      }
      if (head->random) {
        temp->random = new Node(head->random->data);
      } 
      else {
        temp->random = NULL;
      }
        temp=temp->next;
        head=head->next;
    }
    return nhead;