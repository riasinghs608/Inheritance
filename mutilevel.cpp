#include<iostream>
using namespace std;
class square
{
	int a;
	
	public :
	         void squaret(int x)
	         {   
	             a=x;
	         	 cout<<"\nSquare of the first number is : "<<a*a;
	         }
	         ~square()
	         {
	         	cout<<"\n\nObject going out of scope ";
	         }
};

class cube : public square
{
	int z;
	
	public : 
	
	         void cubet( int y)
			 {
			   z=y;
			   cout<<"\nCube of the second number is : "<<z*z*z;  
			 }
	         ~cube()
	         {
	         	cout<<"\n\nObject going out of scope";
	         }
	         
	
};

class display : public cube
{
	public : int l,m;
    void input()
    {
    	cout<<"\nEnter any 2 numbers : ";
    	cin>>l>>m;
    	squaret(l);
    	cubet(m);
    }
}d;

int main()
{   
   d.input();
	
	return 0;
}
