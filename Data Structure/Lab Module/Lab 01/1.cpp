#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_info()
    {
        cout<<name<<" "<<id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }

};

class Rectangle{
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
//class recursion
class Person
{public:
    string name;
    Person *father,*mother;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Person p;
    p.father=new Person;
    p.mother=new Person;
    p.name="shabbir";
    p.father->name="Shadi";
    p.mother->name="Laily";

    cout<<p.name<<" "<<p.father->name<<" "<<p.mother->name<<"\n";

//    Rectangle r1;
//    r1.height=4;
//    r1.width=8;
//
//    r1.s.name="Shabbir";
//
//    cout<<r1.calculate_area()<<"\n";
//    cout<<r1.calculate_perimeter()<<"\n";
//    cout<<r1.s.name <<"\n";

//    Student s;
//    s.name="shabbir";
//    s.id=22299413;
//    s.age=21;
//    s.fathers_name="shake shadi";
//    s.mothers_name="laily khatun";
//
//
//    Student s2;
//    s2.name="Lotifur";
//    s2.id=22299413;
//    s2.age=221;
//    s2.fathers_name="B.M. Shake Shadi";
//    s2.mothers_name="Mrs. Laily Khatun";
//
//    s.print_info();
//    s2.print_info();
    return 0;
}
