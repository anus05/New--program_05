#include<iostream>
using namespace std;
class addition 
{
	private:
		int a,b;
    public:
    	void putdata()
    	{
    		cin>>a>>b;
    		
		}
		void getdata(){
			cout<<a+b;
			
		}
};
int main(){
	addition aa;
	aa.putdata();
	aa.getdata();
	return 0;
}
