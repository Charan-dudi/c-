#include<iostream>
using namespace std;
class unary
{
private:
int a,b,c;
public:
	unary(int x,int y,int z)
	{
		a=x;
		b=y;
		c=z;
	}
	void display()
	{
		cout<<"\t a="<<a<<"\t b="<<b<<"\t c="<<c;
	}
void operator ++()
{
a++;
b++;
c++;
}
};
int main()
{
	unary obj(10,20,30);
	cout<<"before incrementing";
	obj.display();
	++obj;
	cout<<"after incremennting";
	return 0;
}
