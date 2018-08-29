#include <iostream>
#include<math.h>

using namespace std;

struct Node
{
    int constants;
    int power;
    Node *next;
};

class POLYNOMIAL
{

Node *head = NULL;

public:
void INSERT_HEAD(int CONSTANT,int POWER)
{
    Node *newNode = new Node;
    newNode->constants=CONSTANT;
    newNode->power=POWER;

    if(head==NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        //cout<<"dfh";
        newNode->next=head;
        head = newNode;
    }
  //  cout<<"head "<<head->constants<<endl<<"power "<<head->power<<endl<<"newNode "<<newNode->constants<<endl<<"new "<<newNode->power<<endl;
    cout<<"NODE INSERTED AT HEAD"<<endl;
}
void OPERATIONS(POLYNOMIAL P1,POLYNOMIAL P2)
{
    Node *value1,*value2;
    value1 = P1.head;
    value2 = P2.head;

    while(value1!=NULL || value2!=NULL)
    {
    //int value3 = pow(value1->constants,value1->power)+pow(value2->constants,value2->power);

    if(value1->power == value2->power)
    {
        cout<<"ADDED CONSTANT IS"<<value1->constants+value2->constants<<"x^"<<value1->power<<"+";
    }
    else
    {
        cout<<"THE LEFT OUT POLYNOMIALS ARE "<<value1->constants<<"x^"<<value1->power<<" + "<<value2->constants<<"x^"<<value2->power<<endl;
    }
    value1 = value1->next;
    value2= value2->next;


    }
}

void display()
{
    Node *t;
    t = head;
    while(t!=NULL)
    {
        cout<<"|"<<t->constants<<"|"<<t->power<<"|"<<endl;
        t = t->next;
    }
}
};

int main()
{
    int choice,constant,power;
    POLYNOMIAL P1,P2,P3;
    cout<<"ENTER\n1.INSERT INTO POLYNOMIAL 1\n2.INSERT INTO POLYNOMIAL 2\n3.DISPLAY BOTH LISTS"<<endl;
    cin>>choice;
    while(choice != -1)
    {
        switch(choice)
        {

        case 1:
            cout<<"ENTER THE CONSTANT"<<endl;
            cin>>constant;
            cout<<"ENTER THE POWER"<<endl;
            cin>>power;
            P1.INSERT_HEAD(constant,power);
            break;
        case 2:

            cout<<"ENTER THE CONSTANT"<<endl;
            cin>>constant;
            cout<<"ENTER THE POWER"<<endl;
            cin>>power;
            P2.INSERT_HEAD(constant,power);


        case 3:
            cout<<"THE NODES AT LINKED LIST 1 IS "<<endl;
            P1.display();
            cout<<"THE NODES AT LINKED LIST 2 IS"<<endl;
            P2.display();
            break;

        case 4:
            cout<<"ADDING THE CONSTANTS"<<endl;
            P3.OPERATIONS(P1,P2);
            break;
        }
        cout<<"ENTER\n1.INSERT INTO POLYNOMIAL 1\n2.INSERT INTO POLYNOMIAL 2\n3.DISPLAY BOTH LISTS"<<endl;
    cin>>choice;

    }

return 0;
}
