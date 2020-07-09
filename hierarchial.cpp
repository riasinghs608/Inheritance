#include<iostream>
using namespace std;
class operation 
{
	int a,z;
	
	public :
	         void squaret(int x)
	         {   
	             a=x;
	         	 cout<<"\nSquare of the second number is : "<<a*a;
	         }
	         
	          void cubet( int y)
			 {
			   z=y;
			   cout<<"\nCube of the first number is : "<<z*z*z;  
			 }
	         ~operation()
	         {
	         	cout<<"\nObject going out of scope";
	         }
};

class input : public operation
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




class output : public operation
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
