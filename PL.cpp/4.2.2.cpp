#include<iostream>
using namespace std;

class Person
{
public:
virtual void read()
{
cout<<"person is reading:"<<endl;
}
};
class Student:public Person
{
public:
void read()
{
cout<<"student is reading:"<<endl;
}
};
int main()
{
Person *ptr;
Student student;
ptr=& student;
ptr->read();
return 0;
}
