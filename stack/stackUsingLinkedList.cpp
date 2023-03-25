#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int n){
            this->data = n;
            this->next = NULL;
        }
        Node();
};

class Stack{
    private:
        Node* head;
    public:
        Stack(){
            head = NULL;
        }
        void push(int n){
            if(head==NULL){
                head = new Node(n);
                return;
            }
            Node* newNode = new Node(n);
            newNode->next = head;
            head = newNode;
        }
        int pop(){
            if(head == NULL)
                return -1;
            int n = head->data;
            head = head->next;
            return n;
        }
        void display(){
            Node* curr = head;
            while(curr != NULL){
                cout << curr->data << " ";
                curr = curr->next;
            }
            cout << endl;
        }
};

int main(){
    cout << "Stack Using Linked List\n";
    int choice,n;
    Stack st;
    do{
        cout << "1. Push an element into stack\n";
        cout << "2. Pop an element from the stack\n";
        cout << "3. Display the stack\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter the value to be pushed into stack : ";
            cin >> n;
            st.push(n);
        }
        
        else if(choice == 2){
            if((n = st.pop()) != -1)
                cout << n << " deleted from the stack \n";
        }        
        else if(choice == 3)
            st.display();
        
        else if (choice == 4)
            cout<< "you are out of the program\n";
        
        else
            cout << "enter a valid input!!\n";
        
    }while(choice != 4);
    return 0;
}
