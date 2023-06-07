     if(k==0){return head;}
     ListNode *temp=head;
     int n=0;
     while(temp){
          temp=temp->next;n++;
     }
     k%=n;
     if(k==0){return head;}
     temp=head;
     int dis=n-k-1;
     while(dis--){temp=temp->next;}
     ListNode *nhead=temp->next;
     temp->next=NULL;
     ListNode *cur=nhead;
     while(cur){
          if(cur->next==NULL){cur->next=head;break;}
          cur=cur->next;
     }
     return nhead;