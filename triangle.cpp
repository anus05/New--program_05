/* Write a C++ program to create a class called Triangle that has private member variables for 
 the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.*/
 #include<iostream>
 using namespace std;
 class Triangle{
        private :
            int l1;
            int l2;
            int l3;
        public:
            void getresult(void);
                


 };

 void Triangle :: getresult(void)
    
    {if(l1==l2 && l2==l3 &&l3==l1)
    {
        cout<<"The Triangle is Equilateral";
    }
    else if(l1=l2 || l2==l3 ||l3==l1)
    {
        cout<<"The Triangle is isosceles";
    }
    else{
        cout<<"the Triangle is scalene";
    }
    }
 int main()
 { 
    int l1,l2,l3;
    cout<<"Enter three sides of the triangle : "<<endl;
    cin>>l1>>l2>>l3;
    Triangle l;
    l.getresult();
    return 0;

 }
