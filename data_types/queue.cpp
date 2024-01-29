#include<iostream>
using namespace std;


#define n 20
//create a class queue

class queue {
    int* arr;
    int front;
    int back;

    public:
    queue() {
        arr = new int[n];
        front=-1;
        back=-1;
    }
    void push(int x) { //function to add element in the queue.
    if (back==n-1) {
        cout<<"Queue overflo;";
        return;
    }
    back++;
    arr[back]=x;

    if(front==-1) {
        front++;

    }

}
void pop(){ //to remove an element from the queue
    if(front==-1 || front>back) {
        cout<<"No elements in queue"<<endl;
        return;

    }
    front++;
}

int peek() {
    if(front==-1 || front>back) {
        cout<<"No elements in queue"<<endl;
        return -1;

    }
    return arr[front];
}

bool empty() {
    if(front==-1 || front>back) {
        return true;
    }
    return false;
}
};

int main() {
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

//check if queue is empty or not
    cout<<q.empty()<<endl;



    return 0;
}