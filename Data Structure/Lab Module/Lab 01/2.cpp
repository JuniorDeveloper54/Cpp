#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

public:
    void print_info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
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


class Admin: User
{
private:
    string designation;
public:
    void Set(string s, int ag, string dg)
    {
        name=s;
        age=ag;
        designation=dg;

    }
    void print()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<designation<<endl;
    }
};



//main code section....
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    Student s;
//    s.setInformation("Shabbir", 2299413, 21);
//    s.print_info();

    Admin ad;
    ad.Set("Shabbir" , 20 , "CEO");
    ad.print();

    return 0;
}
