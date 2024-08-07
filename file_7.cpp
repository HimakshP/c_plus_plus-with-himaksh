#include <iostream>
using namespace std;
//Design a ComplexNumber class with attributes for the real and imaginary parts.
//Implement methods to add, subtract, multiply, and display the complex numbers.
class complex_no
{
    public:
    int a1;
    int a2;
    int b1;
    int b2;
    int a;
    int b;
    int add()
    {
     a= a1+a2;
     b= b1+b2;
    }
    int sub()
    {

     a= a1-a2;
     b= b1-b2;
    }
    int product()
    {
     a= a1*a2;
     b= b1*b2;
    }
    void show()
    {
        cout<<a<<"+"<<b<<"i";
    }


    
};
int main()
{
    int c;
    complex_no obj;
    cout<<"Enter real part of first complex number\n";
    cin>>obj.a1;
    cout<<"Enter complex part of first complex number\n";
    cin>>obj.b1;
    cout<<"Enter real part of second complex number\n";
    cin>>obj.a2;
    cout<<"Enter complex part of second complex number\n";
    cin>>obj.b2;
    cout<<"choose from the following:\n1)add\n2)subtract\n3)multiply\n";
    cin>>c;
    switch(c)
    {
        case(1):
        {
            obj.add();
            break;
        }
        case(2):
        {
            obj.sub();
            break;
        }
        case(3):
        {
            obj.product();
            break;
        }
        default:
        {
            cout<<"please choose from above..\n";

        }
    }
    obj.show();

}