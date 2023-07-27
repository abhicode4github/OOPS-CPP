// defining a class for Rectangle  

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
    Rectangle r1;
    Rectangle r2;
    
    r1.length=10;
    r1.breadth=5;
    
    cout<<"area of first rectangle: "<<r1.area()<<endl;
    
    cout<<"perimeter of first rectangle: "<<r1.perimeter()<<endl;
    
    r2.length=15;
    r2.breadth=10;
    
    cout<<"area of second rectangle: "<<r2.area()<<endl;
    
    cout<<"perimeter of second rectangle is: "<<r2.perimeter()<<endl;
    
    return 0;
}

// output 

area of first rectangle: 50 
perimeter of first rectangle: 30
area of second rectangle: 150
perimeter of second rectangle: 50 
