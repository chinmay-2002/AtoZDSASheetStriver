class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       if(head==NULL){
           return new Node(x);
       }
       Node* node = new Node(x);
       node->next = head;
       head = node;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       if(head==NULL){
           return new Node(x);
       }
       Node* temp = head;
       Node* node = new Node(x);
       while(temp->next!=NULL){
           temp = temp->next;
       }
       temp->next = node;
       return head;
    }
};