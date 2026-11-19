#include<iostream>
using namespace std;

class Book
{
public:
int bookid;
string bookname;
Book(int bid,string bname)
{
bookid=bid;
bookname=bname;
}
Book(Book&b)
{
bookid=b.bookid;
bookname=b.bookname;
}
void display()
{
cout<<"the book id is :"<<bookid<<endl;
cout<<"the book name is:"<<bookname<<endl;
}
};
int main()
{
Book b1(173,"gita");
Book b2(b1);
b1.display();
b2.display();

return 0;
}
