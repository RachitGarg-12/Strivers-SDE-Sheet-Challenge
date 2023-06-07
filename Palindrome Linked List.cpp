// O(N) time and O(1) space
bool isPalindrome(LinkedListNode<int> *head) {
        if(head==NULL || head->next==NULL){return true;}
        //find middle of linked list
        LinkedListNode<int> *fast=head;
        LinkedListNode<int> *slow=head;
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast && fast->next==NULL){
            slow=slow->next;
        }
        
        //reverse end of linked list
        LinkedListNode<int> *prev=NULL;
        LinkedListNode<int> *cur=slow;
        while(cur){
            LinkedListNode<int> *temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        
        LinkedListNode<int> *start = head;
        while(prev && start){
            if(prev->data != start->data){
                return false;
            }
            prev = prev->next;
            start = start->next;
        }
        return true;    

}