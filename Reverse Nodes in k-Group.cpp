void reverse( Node *st, Node *en){
        Node *p=NULL,*c=st,*n=st->next;
        while(p!=en){
			c->next=p;
            p=c;c=n;
            if(n!=NULL) n=n->next;
		}
}
Node *f(Node *head,int b[],int i,int n){
	if(head==NULL || head->next==NULL || i==n){return head;}
	if(b[i]==0){return f(head,b,i+1,n);}
	int pos=b[i];pos--;
	Node *st=head;
	Node *en=head;
	while(en->next && pos--){en=en->next;}
	Node *nexhead=f(en->next,b,i+1,n);
	reverse(st,en);
	st->next=nexhead;
	return en;
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	return f(head,b,0,n);
}