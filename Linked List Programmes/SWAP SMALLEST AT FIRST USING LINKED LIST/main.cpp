#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
class Swaplist
{
    Node *head = NULL;

public:

    void insertTail(int value)
    {
        Node *newNode = new Node;
        Node *tailNode;
        newNode->data=value;
        if(head == NULL)
        {   newNode->next = NULL;
            head = newNode;
        }
        else{
            tailNode = head;

            while(tailNode->next!=NULL)
            {
                tailNode=tailNode->next;
            }
            tailNode->next= newNode;
            newNode->next=NULL;
        }
    }

    Swaplist swapSmaller(Swaplist List1,int num)
    {
        Node *elements;
        elements = List1.head;
        int temp;

        while(elements!=NULL)
        {
            if(elements->data == num)
            {
                temp = elements->data;
                cout<<temp<<endl;
                while((elements->next)->data < temp)
                {
                    cout<<(elements->next)->data<<"THIS IS LESS"<<endl;
                    elements=elements->next;
                }
            }
            elements=elements->next;
        }
    }

    void display()
    {
        Node *t;
        t = head;

        while(t!=NULL)
        {
            cout<<t->data<<endl;
            t = t->next;
        }
    }

};
int main()
{
    int choice ,element;
    int number;
    Swaplist List1,List2;
    cout<<"Enter\n1.INSERT INTO TAIL OF THE LINKED LIST\n2.DISPLAY THE LIST"<<endl;
    cin>>choice;

    while(choice!= -1)
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the element to insert into tail"<<endl;
            cin>>element;
            List1.insertTail(element);
            break;
        case 2:
            cout<<"THE ELEMENTS IN THE LIST ARE"<<endl;
            List1.display();
            break;
        case 3:
            cout<<"insert the number to search"<<endl;
            cin>>number;
            cout<<"AFTER SWAPPING THE ELEMENTS ARE"<<endl;
            List2.swapSmaller(List1,number);
            break;
        }
        cout<<"Enter\n1.INSERT INTO TAIL OF THE LINKED LIST\n2.DISPLAY THE LIST"<<endl;
        cin>>choice;

    }
    return 0;
}
