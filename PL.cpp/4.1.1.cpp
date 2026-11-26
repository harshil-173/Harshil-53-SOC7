#include<iostream>
using namespace std;

class Calculator
{
public:
int add (int x,int y)
{
return x+y;
}
int add (int x,int y,int z)
{
return x+y+z;
}
};
int main()
{
Calculator c;
cout<<"the addition is:"<<c.add(2,3);
cout<<"the addition is:"<<c.add(3,6,5);
return 0;
}

