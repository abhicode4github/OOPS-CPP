// Pointer to Object 

#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;
    
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
   Rectangle r;
   Rectangle *p;
   
   p=&r;
   

   p->length=10;
   p->breadth=5;
   
   cout<<"area is : "<<p->area();
    
    return 0;
}

// output 

area of rectangle : 50
