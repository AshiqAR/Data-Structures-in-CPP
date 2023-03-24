#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack{
    private:
        int top, s[MAX_SIZE];

    public:    
        Stack(){
            top = -1;
        }
        void push(int n){
            if(top == MAX_SIZE-1){
                cout << "pushing into stack not possible\n Stack is full!" << endl;
                return ;
            }
            top++;
            s[top] = n;
        }
        int pop(){
            if(top==-1){
                cout<< "stack is empty for poping!!\n";
                return -1;
            }
            return s[top--];
        }
        void display();
};

void Stack::display(){
    for(int i=0;i<=top;i++){
        cout << s[i] << " ";
    }
    cout << endl;
}


int main(){
    cout << "Stack Using Arrays\n";
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
            if(n = st.pop() != -1)
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
