#include <iostream>

using namespace std;

struct Node{

int data;
Node *next;
};

class Solution{
    Node * head;
    public:
        Solution()
        {
            head = NULL;
        }

    void INSERT(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;

        if(head == NULL)
        {
            newNode -> next = NULL;
            head = newNode;
            }
        else{
                newNode->next = head;
                head = newNode;
            }
    }
    Solution INSERT_ALT(Solution &S1)
    {
        Solution S3;
        Node *t1,*t2;

        t1 = head;
        t2 = S1.head;

        while(t1!=NULL || t2!=NULL)
        {
            if(t1!=NULL)
            {
                S3.INSERT(t1->data);
                t1 = t1->next;
            }
            if(t2!=NULL)
            {
                S3.INSERT(t2->data);
                t2 = t2->next;
            }
        }

        return S3;

    }

    void display()
    {
        Node *t;
        t = head;
        while(t!=NULL)
        {
            cout<<t->data<<" "<<endl;
            t = t->next;
        }
    }

};

int main()
{
    Solution First,Second,third;
    int choice , element,element1;

    cout<<"Enter the choice\n1.insert into LIST_1\n2.insert into LIST_2\n3.Print adjoining nodes\n4.display"<<endl;
    cin>>choice;
    while(choice != -1)
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the element"<<endl;
            cin>>element;
            First.INSERT(element);
            break;
        case 2:
            cout<<"Enter the element"<<endl;
            cin>>element1;
            Second.INSERT(element1);
            break;
        case 3:

            third = First.INSERT_ALT(Second);
            break;
        case 4:
            cout<<"THE DATA IN THE FIRST NODE IS"<<endl;
            First.display();
            cout<<"THE DATA IN THE SECOND NODE IS"<<endl;
            Second.display();
            cout<<"THE DATA IN THE THIRD NODE IS"<<endl;
            third.display();
            }

        cout<<"Enter the choice\n1.insert into LIST_1\n2.insert into LIST_2\n3.Print adjoining nodes\n4.display"<<endl;
        cin>>choice;

    }

}

