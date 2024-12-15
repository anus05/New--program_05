/*******
class using objet find GCD of two number
********/
#include<iostream>
using namespace std;
class GCD
{
	private:
		int n1,n2,gcd=0;
    public:
    	void putdata()
    	{
    		cout<<"Enter two Number:\n";
    		cin>>n1>>n2;
    		
		}
		void getdata()
		{
			int i;
			for(i=1; i <= n1 && i <= n2; ++i)
    		{
        
        		if(n1%i==0 && n2%i==0)
            		gcd = i;
   			 }
			
		}
		void output()
		{
			cout<<" GCD of "<<n1<<" and "<<n2<< " is "<<gcd;
					}
		
};
int main(){
	GCD aa;
	aa.putdata();
	aa.getdata();
	aa.output();
	return 0;
}
