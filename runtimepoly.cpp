#include<iostream>
using namespace std;
class base
{
	public:
		virtual void print()
		{
			cout<<"print() of base class"<<endl;
		}
};
class derived:public base
{
	public:
		void print()
		{
			cout<<"print() of derived class"<<endl;
		}
};
int main()
{
	base b,*bptr;
	bptr=&b;
	bptr->print();
	derived d,*dptr;
	dptr=&d;
	dptr->print();
	return 0;
}
