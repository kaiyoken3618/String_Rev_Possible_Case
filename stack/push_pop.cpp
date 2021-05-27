#include<bits/stdc++.h>
#include<string>
#include<stack>

using namespace std;

struct node
{
    int data;
    node *link;
};

node *top = NULL;

bool isempty()
{
    if(top == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int value)
{
    node *ptr = new node();
    ptr->data = value;
    ptr->link = top;
    top = ptr;
}
void pop()
{
    if(isempty())
    {
        cout << "Stack is Empty";
    }
    else
    {
        node *ptr = top;
        top = top -> link;
        delete(ptr);
    }
}

void showtop()
{
    if(isempty())
    {
        cout << "stack is empty";
    }
    else
    {
        cout << "element at top is:" << top->data;
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    showtop();
    return 0;
}
