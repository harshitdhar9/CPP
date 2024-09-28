class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head=nullptr;
    }
    int length(){
        int count =0;
        Node* temp=head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        return count;
    }
    int get(int index) {
        int len=length();
        if(head==nullptr) return -1;
        else if(len<index) return -1;
        else{
            int count=0;
            Node* temp=head;
            while(count<index){
                temp=temp->next;
                count++;
            }
            if(temp==nullptr) return-1;
            return temp->val;
        }
    }
    
    void addAtHead(int val) {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode=new Node(val);
        if(head==nullptr){
            head=newNode;
        }
        else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    
    void addAtIndex(int index, int val) {
        Node* newNode=new Node(val);
        if(index==0){
            addAtHead(val);
        }
        else{
            int count=0;
            Node* temp=head;
            while(temp!=nullptr && count<index-1){
                temp=temp->next;
                count++;
            }
            if(temp==nullptr) return;
            Node* right=temp->next;
            temp->next=newNode;
            newNode->next=right;
        }
    }
    
    void deleteAtIndex(int index) {
        if (head == nullptr) return;
        else if(index==0){
            Node* del=head;
            head=head->next;
            delete del;
        }
        else{
            int count=0;
            Node* temp=head;
            while(count<index-1){
                temp=temp->next;
                count++;
            }
            if (temp == nullptr || temp->next == nullptr) return;
            Node* del=temp->next;
            temp->next=temp->next->next;
            delete del;
        }
    }
};