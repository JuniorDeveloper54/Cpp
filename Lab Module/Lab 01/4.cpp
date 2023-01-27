#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;


    Student(string name, int std_id, int age)
    {
        this->name=name;
        this->std_id=std_id;
        this->age=age;
    }

public:
    void print_info()
    {
        cout<<name<<"\n"<<std_id<<"\n"<<age<<"\n"<<fathers_name<<"\n"<<mothers_name<<"\n";
    }
    //accessing or setting value to private variable
    void setInformation(string s, int id, int ag)
    {
        name=s;
        std_id= id;
        age=ag;
    }
};

class Rectangle
{
public:
    int width,height;
    Student s;


    //calculate area
    int calculate_area()
    {
        return height*width;
    }
    //calculating perimeter
    int calculate_perimeter()
    {
        return 2*(height+width);
    }


};

class Person
{
public:
    string name;
    Person *father,*mother;
};


class User
{
protected:
    string name;
    int age;
};



//main code section....
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Student  *s = new Student("shabbir",10,20);

    //accessing pointer info
    s->print_info();//method 1**
    (*s).print_info();//method 2


    return 0;
}


