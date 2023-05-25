#include <iostream>
using namespace std;

class STACKS
{
    struct node
    {
        int data;
        node *link;
    };
    public:
    node *top;
    node *temp;
    int a;
    STACKS()
    {
        top = NULL;
    }
    void push(int num)
    {
        if(top==NULL)
        {
            temp = new node;
            temp->data = num;
            cout<<num<<endl;
            temp->link = top;
            top = temp;
        }
        else
        {
            temp = new node;
            temp->data = num;
            cout<<num<<endl;
            temp->link = top;
            top = temp;
        }
    }
    void pop()
    {
        if(temp==NULL)
        {
            top = temp;
            cout<<top->data;
            top = top->link;
            delete (temp);
        }
        else
        {
            top = temp;
            cout<<top->data;
            top = top->link;
            delete (temp);
        }
    }
};

int main()
{
    STACKS o;
    cout<<"ELEMENTS IN THE STACKS ARE"<<endl;
    o.push(10);
    o.push(20);
    o.push(30);
    cout<<"1st ELEMENT IN THE STACK GOT POPPED"<<endl;
    o.pop();
    return 0;
}
