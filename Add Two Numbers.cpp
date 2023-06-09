Node *addTwoNumbers(Node *l1, Node *l2)
{
   Node *dummy=new Node();
   Node *temp=dummy;
   int carry=0;
   while((l1!=NULL || l2!=NULL) || carry){
       int sum=0;
       if(l1!=NULL){
           sum+=l1->data;
           l1=l1->next;
       }
       if(l2!=NULL){
           sum+=l2->data;
           l2=l2->next;           
       }
       sum+=carry;
       carry=sum/10;
       Node *rec=new Node(sum%10);
       temp->next=rec;
       temp=temp->next;
   }
   return dummy->next;

}