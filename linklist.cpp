#include<iostream>
#include<map>
using namespace std;

class Node{

    public:
    int data;
    Node *next;
    
    // constructor
    Node (int data){
        this -> data = data;
        this -> next = next;
    }
};

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {  // Changed the condition here
        cout << temp->data << " ";
        temp = temp->next;  // Moved temp to the next node
    }
    cout << endl;
}


void InsertAtHead(Node* &head, int d){
    
    // node creation
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    
}

bool linearsearch(Node* &head, int size ,int key){
    
    Node* temp = head;
    
    for(int i = 0; i< size ; i++){
        temp = temp -> next;
        if(temp -> data == key){
            return true;
        }
    }
    return false;
}

bool isCircular(Node* head)
{
     if(head == NULL)
     {
        return NULL;
     }
     Node* temp = head -> next;
     while(temp != NULL &&  temp != head)
     {
        temp = temp -> next;
     }

     if(temp == head)
     {
        return true;
    
     }
    return false;

}

bool detectloop(Node* head){

    if(head == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while (temp != NULL)
    {
        if(visited[temp] == true){
            cout <<"present on element " << temp -> data <<  endl;
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;

}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;    

    InsertAtHead(head , 15);
    InsertAtHead(head , 10);
    InsertAtHead(head , 18);
    InsertAtHead(head , 81);
    InsertAtHead(head , 13);
    InsertAtHead(head , 20);
    tail -> next =  head -> next;
    
    //print(head);
    // cout << "tail data : " << tail -> data << endl; 
    // cout << "tail next : " << tail -> next << endl; 
    

    // print(head);
    // cout << "this was the list above " << endl;
    
    // if(linearsearch(head, 6, 81)){
    //     cout << "element found " << endl;
    // }
    // else{
    //     cout << "element not found "<< endl;
    // }
    
    // checking loop in list

    if(detectloop(head)){
    cout <<"yes loop is present: " << endl;
    }
    else{
        cout << "no loop is not present "<< endl;
    }

    return 0;
}