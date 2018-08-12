#include <iostream>
/* insertion at tail */
using namespace std;

struct node
{

    int data ;
    node * next;

};
 node * head =NULL;

/* ASSIGNING MEMORY TO THE HEADS */
node* create(int x)
{
node * ptr = new node;
ptr->data= x;
ptr->next = NULL;
return ptr;
}

/* ********************************************* */

void insert_tail (int n)
{

    node *temp,*t;
    temp = create(n);

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        t = head;

        while(t->next != NULL)
        {
            t = t->next;

        }
         t->next = temp;
            temp->next = NULL;
    }
}
//static int head_Count;
void insert_head(int n)
{
node *temp;
temp = create(n);

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
        //head_Count +=1;
        //cout<<"the count of heads is"<<head_Count<<endl;
    }
}

int getCount(struct node* head)
{
    // Base case
    if (head == NULL)
        return 0;

    // count is 1 + count of remaining list
    return 1 + getCount(head->next);
}

void display_tail()
{

    node *t;
    t = head;
    cout<<"THE ELEMENTS AT TAIL ARE"<<endl;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }
}

void display_head()
{

     node *t;
    t = head;
    cout<<"THE ELEMENTS AT HEAD ARE"<<endl;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }

}


int main()
{
    int choice,element;
    cout<<"ENTER THE CHOICE\n1.Insert At tail\n2.Insert at head\n3.display tail\n4.display head "<<endl;
    cin>>choice;

    while(choice!=-1)
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the element to insert at tail"<<endl;
            cin>>element;
            insert_tail(element);
            break;
        case 2:
            cout<<"Enter the element to insert at head"<<endl;
            cin>>element;
            insert_head(element);
            cout<<"THE PRESENT COUNT"<<getCount(head)<<endl;
            break;
        case 3:
            display_tail();
            break;
        case 4:
            display_head();
            break;

        }
       cout<<"ENTER THE CHOICE\n1.Insert At tail\n2.Insert at head\n3.display tail\n4.display head"<<endl;
    cin>>choice;


    }

}
