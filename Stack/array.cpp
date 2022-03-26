// C++ program for array implementation of stack
#include<iostream>
#define max 1000
using namespace std;
class stack{
int top;
public:
int a[max];
stack(){top=-1;}
bool push(int x){
    if (top>=(max-1))
    {
        cout<<"no space in stack";
        return false;
    }
    else
    {
        a[++top]=x;
        cout<<x<<"pushed into stack";
        return true;
    }
    

}
int pop(){
    if (top<0)
    {
        cout<<"stack is empty";
        return 0;
    }
    else
    {
        int x=a[top--];
        return x;
    }
 
}
    int peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
 bool isEmpty()
{
    return (top < 0);
}


};
int main(){
    class stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    //print all elements in stack :
    cout<<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout<<s.peek()<<" ";
        // remove top element in stack
        s.pop();
    }
    return 0;
}