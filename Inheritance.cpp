//Omkar Nangnure 
//1703018
#include<iostream>
using namespace std;

class A
{
	private:
		int  a2;
	protected:
		int a3;	
	public: 	
		int a1;
		A()
		{
			int a,b,c;
			cout<<"Enter a1,a2,a3";
			cin>>a>>b>>c;
			a1=a;
			a2=b;
			a3=c;	
		}
		void showall()
		{
			cout<<"\na1:"<<a1<<"   a2:"<<a2<<"  a3:"<<a3;
		}

};

class B:virtual public A
{
	private:
		int b2;
	protected:
		int b3;
	public:
		int b1;
		B():A()
		{
			int a,b,c;
			cout<<"Enter b1,b2,b3";
			cin>>a>>b>>c;
			b1=a;
			b2=b;
			b3=c;
		}
		void addallB()
		{
			int add=b1+b2+b3+a1+a3;
			cout<<"\nAddition is:"<<add;
		}
};

class C:virtual private A
{
	private:
		int c2;
	protected:
		int c3;
	public:
		int c1;
		C():A()
		{
			int a,b,c;
			cout<<"\nEnter c1,c2,c3";
			cin>>a>>b>>c;
			c1=a;
			c2=b;
			c3=c;
		}
		void addallC()
		{
			int add=c1+c2+c3;
			cout<<"\nAddition is:"<<add;
		}
};

class D:protected B,private C
{
	private:
		int d2;
	protected:
		int d3;
	public:
		int d1;
		D():B(),C()
		{
			int a,b,c;
			cout<<"\nEnter d1,d2,d3";
			cin>>a>>b>>c;
			d1=a;
			d2=b;
			d3=c;
		}
		void addall()
		{
			showall();			
			addallB();			
			addallC();			
			int add=d1+d2+d3+b1+b3+c1+c3;
			cout<<"\nAddition is:"<<add;
		}
};

int main()
{
	D Dobj;
	Dobj.addall();
	
	return 0;
}
