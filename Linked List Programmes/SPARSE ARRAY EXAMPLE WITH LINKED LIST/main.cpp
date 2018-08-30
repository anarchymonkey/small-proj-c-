#include <iostream>

using namespace std;

struct Node{

int data;
Node *next;
};
Node *head = NULL;


class Sparsearr{

public:
    void INSERT_TAIL(int value)
    {
        Node * newNode = new Node;
        Node * TailNode;

        newNode->data = value;

        if(head == NULL)
        {
            newNode->next = NULL;
            head = newNode;
        }
        else
        {
            TailNode = head;

            while(TailNode->next!=NULL)
            {
                TailNode = TailNode->next;
            }
            TailNode->next = newNode;
            newNode->next = NULL;

        }

    }

    Sparsearr addArr(Sparsearr arrData)
    {
        Node *value1;
        value1 = head;
        int sum = 0;

        while(value1!=NULL)
        {
            if(value1->data != 0)
            {
                cout<<"THE VALUES ARE"<<value1->data<<endl;
                sum += value1->data;

            }
            value1 = value1->next;
        }

        cout<<"THE SUM OF THE NON ZERO ELEMENTS ARE "<<sum<<endl;
    }


    void display()
    {
        Node *temp = head;

        while(temp->next != NULL)
        {
            cout<<"THE ARRAY IS "<<temp->data<<endl;
            temp = temp->next;
        }
    }
};



int main()
{
    int choice,element;
    Sparsearr S1,S2;

    cout<<"ENTER\n1.INSERT INTO ARR1\n2.DISPLAY ARR 1 \n3.SUM OF NON ZERO ELEMENTS"<<endl;
    cin>>choice;

    while(choice != -1)
    {

        switch(choice)
        {
        case 1:
            cout<<"ENTER THE ELEMENTS TO ENTER "<<endl;
            cin>>element;

            S1.INSERT_TAIL(element);
            break;
        case 2:
            cout<<"ELEMENTS IN THE ARRAY ARE "<<endl;
            S1.display();
            break;
        case 3:
            cout<<"AFTER ADDING THE SUM IS "<<endl;
            S2.addArr(S1);
            break;
        }
         cout<<"ENTER\n1.INSERT INTO ARR1\n2.DISPLAY ARR 1 \n3.SUM OF NON ZERO ELEMENTS"<<endl;
    cin>>choice;
    }
}
