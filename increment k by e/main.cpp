#include <iostream>

using namespace std;
int * STACK;
int top = 0, choice, element,k,size;

void push(int x)
{STACK[top++]=x;}
int pop ()
{top --; return STACK[top];}

int main()
{
    cout<<"Enter the size of the stack"<<endl;
    cin>>size;
    STACK = new int[size];
    cout<<"Enter the ammount to increment"<<endl;
    cin>>k;
    cout<<"Enter\n1.push & increment\n2.Display\n3.Change increment value"<<endl;
    cin>>choice;

    while(choice != -1)
    {
        switch(choice)
        {

        case 1:
            cout<<"Enter the element to push"<<endl;
            cin>>element;           push(element+k);
                            break;
        case 2:
            for(int i = 0 ; i<top ;i++){cout<<STACK[i]<<endl;}
                             break;
        }
         cout<<"Enter\n1.push & increment\n2.Display"<<endl;
            cin>>choice;

    }
}
