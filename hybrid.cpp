#include<iostream>
using namespace std;
class input
{
	int s,w;
	public:
		void getnum1()
		{
			cout<<"\nEnter first number : ";
			cin>>s;
		}
		int returnnum1()
		{
			return s;
		}
		void getnum2()
		{
			cout<<"\nEnter second number : ";
			cin>>w;
		}
		int returnnum2()
		{
			return w;
		}
}i;
class square : public input
{
	int a;
	
	public :
	         void squaret(int x)
	         {   
	             a=x;
	         	 cout<<a*a;
	         }
	         ~square()
	         {
	         	cout<<"\nObject going out of scope ";
	         }
};

class cube : public input
{
	int z;
	
	public : 
	
	         void cubet( int y)
			 {
			   z=y;
			   cout<<"\n"<<z*z*z;  
			 }
	         ~cube()
	         {
	         	cout<<"\nObject going out of scope";
	         }
	         
	
};

class output : public cube, public square
{
	public : 
	void showdata()
	{
		cout<<"\nCube of the first number is : ";
		i.getnum1();
		cubet(i.returnnum1());
		
		cout<<"\n\nSquare of the second number is  : ";
		i.getnum2();
		squaret(i.returnnum2());
	}
};



int main()
{   
   output o;
   o.showdata();
	
	return 0;
}
