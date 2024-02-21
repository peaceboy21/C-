#include<iostream>
#include<stack>
using namespace std;

class Stack {

    //properties
    public:
      int *arr;
      int top;
      int size;

    // behavior
    Stack(int size){
        
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    // push operation 
    void push(int element){

        if(size - top > 1){
            top ++;
            arr[top] = element;
        }
        else{
            cout << "stack overflow " << endl;
        }

    }
    // pop operation
    void pop(){

        if(top >= 0){
            top--;
        }
        else{
            cout << "stack underflow " << endl;
        }
    }

    int peek(){

        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout << "stack empty " << endl;
            return -1;
        }
    }

    bool isEmpty(){

        if(top == -1)  
            return 1;
        
        else
            return 0;
    }


};

int main(){
   

   Stack st(5);

   st.push(22);
   st.push(43);
   st.push(44);
   st.push(22);
   st.push(43);
   st.push(44);

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   if(st.isEmpty()){
    cout << "stack empty hai mere dost " << endl;
   }      
   else{
    cout << "nhi stack empty nhi hai " << endl;
   }
   /*
    // creation of stack
    stack<int> s;
    
    // push operation
    s.push(2);
    s.push(3);
    
    // pop operation
    s.pop();
    
    cout << "printing top element -> " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "Stack is not empty " << endl;
    }

    cout << "size of stack is " << s.size() << endl;
    
    */

    return 0;
}