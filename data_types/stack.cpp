#include<iostream>
using namespace std;


#define n 100
//create a class stack and later call its instances
class stack {
    int* arr;//create a dynamic array
    int top;//top element

    public: //public  member functions
    //create a constructor
    stack() {
        arr=new int[n]; //Prededine N
        top=-1;
    }

    //create a push operation
    void push(int x) {
        if(top==1) {
            cout<<"Stack is overflow";
            return;
        }

        top++;
        arr[top]= x;

    }

    void pop() {

        if(top==-1 ) {
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }

    int Top() {
        if(top==-1 ) {
            cout<<"No element to stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top==-1;

    }

};

int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    return 0;

}