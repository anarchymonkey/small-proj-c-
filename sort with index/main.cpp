#include<iostream>
using namespace std;
int i=0,q[100],rear=-1,front=-1,size=5;
void enqueue(int x)
{
	if(rear==size)
	{
		cout<<"overflow condition";
	}
	else if(rear==-1&&front==-1)
	{
		rear=0;
		front=0;
		q[rear]=x;
		rear++;
	}
	else
	{
		q[rear]=x;
		rear++;
	}
}
void dequeue()
{
	if(front==rear)
	{
		 cout<<"underflow";
	}
	front++;
}
void show()
{
	for(int i=front;i<rear;i++)
	{
		cout<<q[i]<<" ";
	}
	cout<<endl;
}
int reverse(int l)
{
	if(l==0)
	return 0;
	else
	{
		int x=q[front];
		front++;
		l=l-1;
		reverse(l);
		q[i]=x;
		i++;
		return 0;
	}
}

int main()
{
	int choice=0,x;
	while(choice!=4)
	{
		cout<<"press1 to enter element"<<endl<<"press2 to delete element"<<endl<<"press3 to show elements"<<endl<<"press4 to exit"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
				  cin>>x;
				  enqueue(x);
				  break;
				}
			case 2:
			   {
			   	dequeue();
			   	break;
			   }
			case 3:
			   {
			   	show();
			   	break;
			   }
		}
	}
	int l;
	cout<<"Enter the length to which the elements in the stack has to be reversed"<<endl;
	cin>>l;
	reverse(l);
	cout<<"The reversed elements are "<<endl;
	for(int k=0;k<rear;k++) cout<<q[k]<<" ";


}
