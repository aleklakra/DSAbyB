/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
   	//empty List
    if(head == NULL)
        return NULL;
    
    //non empty list
    Node* curr = head;
    
    while(curr != NULL) {
        
        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr -> next = next_next;
        }
        else //not equal
        {
            curr = curr -> next;
        }   
    }
    
    return head; 
}
/*
Approach 2:

Node* RemoveDuplicateUnsorted(Node* head){
    if(head==NULL){
        return NULL;
    }
    map<Node*, bool> visited;
    Node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            Node* next_next=temp->next->next;
            Node* nodeToDelete=temp->next;
            delete(nodeToDelete);
            temp->next=next_next;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return head;
}
*/
