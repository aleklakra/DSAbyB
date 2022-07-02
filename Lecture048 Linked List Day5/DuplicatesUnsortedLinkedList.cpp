Node *removeDuplicates(Node *head)
{
    // Write your code here
    if( head == NULL ) return NULL;
    Node* curr = head;
    while( curr != NULL){
        Node* temp = curr -> next;
        Node* prev = curr;
        while( temp->next != NULL){
            
            if( curr->data == temp->data && prev->next != NULL){
                Node* next_next = prev -> next -> next;
                Node* deleted = prev->next;
                delete (deleted);
                prev -> next = next_next;
                
            }
            else{
                prev = prev->next;
                temp = temp->next;
            }
            
        }
    }
    return head;
}

TC -> O(n^2) where n is the number of nodes in the worst case
SC -> O(1)
