#include <iostream>

using namespace std;
int *STACK;
int size;
int top_front= 0;
int top_back;


void push_fr(int x)
{
    STACK[top_front++] = x;
}
void push_bk(int x)
{
    STACK[--top_back] = x;
}

int pop_st1()
{
    top_front--;
    return STACK[top_front];
}
int pop_st2()
{
    top_back++;
    return STACK[top_back];
}

int main()
{

int i = 0;
    int element_front;
    int element_back;
    int choice;

    cout<<"Enter the size"<<endl;
    cin>>size;
    STACK = new int[size];
    top_back=size;

    cout<<"Enter 1. push into stack 1 \n 2. push into stack 2 \n  3.DISPLAY STACK 1 \n 4.DISPLAY STACK 2 \n5.POP STACK 1 \n 6.POP STACK 2"<<endl;
    cin>>choice;

if(top_front != top_back)
{
    while(choice != -1 )
    {
        switch(choice)
        {
    case 1:
            cout<<"Enter the element to be pushed into stack 1: "<<endl;
            cin>>element_front;
            push_fr(element_front);
            break;
    case 2:
            cout<<"Enter the element to be pushed into stack 2: "<<endl;
            cin>>element_back;
            push_bk(element_back);
            break;
    /*case 3:
           pop_first();
           break; */
    case 3:
                cout<<"ELEMENTS IN STACK 1 ARE"<<endl;
            for( int i = 0;i<top_front;i++)
            {
                cout<<STACK[i]<<endl;
            }
            break;

    case 4: cout<<"TOP BACK IS"<<top_back<<endl;
            cout<<"ELEMENTS IN STACK 2 ARE"<<endl;
            for( int i = size-1;i>=top_back;i--)
            {
                cout<<STACK[i]<<endl;
            }
        break;
    case 5:
            cout<<"STACK 1 is being popped"<<endl;
            cout<<"THE POPPED VALUE IS"<<pop_st1()<<endl;
            break;
        case 6:
            cout<<"STACK 2 is being popped"<<endl;
            cout<<"THE POPPED VALUE IS"<<pop_st2()<<endl;
            break;
        }
cout<<"Enter 1. push into stack 1 \n 2. push into stack 2 \n  3.DISPLAY STACK 1 \n 4.DISPLAY STACK 2 \n5.POP STACK 1 \n6.POP STACK 2"<<endl;
cin>>choice;


}
}
else
{

    cout<<"STACK ENDED"<<endl;
}
    }


