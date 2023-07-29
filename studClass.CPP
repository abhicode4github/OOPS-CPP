Write a Class for Student with :-

1.Roll 
2.Name
3.Marks in 3 subjects 
function for 
Total Marks 
Grade
And required methods 

// pROGRAM   


#include<iostream>
using namespace std;

class Student
{
    private: 
    int roll;
    string name;
    int mathMarks;
    int phyMarks;
    int chemMarks;
    
    public:
    
    Student (int r, string n, int m, int p, int c)
    {
        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        chemMarks=c;
    }
    
    int total()
    {
        return mathMarks+phyMarks+chemMarks;
    }
    char grade()
    {
        float average=total()/3;
        
        if(average>60)
        {
            return 'A';
        }
        else if(average>=40 && average<60)
        {
            return 'B';
        }
        else 
        {
            return 'C';
        }
    }
};


int main()
{
    int r;
    string n;
    int m,p,c;
    
    cout<<"Enter roll number of a student: ";
    cin>>r;
    
    cout<<"Enter name of a Student: "<<endl;
    cin>>n;
    
    cout<<"Enter marks in Maths:"<<endl;
    cin>>m;
    
    cout<<"Enter marks in physics: "<<endl;
    cin>>p;
    
    cout<<"Enter marks in chemistry: "<<endl;
    cin>>c;
    
    Student s(r,n,m,p,c);
    
    cout<<"Total marks: "<<s.total()<<endl;
    cout<<"Grade of student: "<<s.grade()<<endl;
}

// output 

Enter roll number of a student: 12
Enter name of a Student:
Abhishek 
Enter marks in Maths:
75
Enter marks in Physics:
80
Enter marks in chemistry:
85
Total marks: 240
Grade of Student: A
