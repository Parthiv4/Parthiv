#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	int no,fact=1;

	cout<<"Enter no:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial is="<<fact;

	getch();
}