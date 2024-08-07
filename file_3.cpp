#include <iostream>
using namespace std;
//Create a Book class with attributes such as title, author, and ISBN.
// Include methods to display book details and set book details.
class book
{
  public:
  string title;
  string author;
  int ISBN;
  void show_details()
  {
    cout<<"This book "<<title<<" is written by "<<author<<", ISBN : "<<ISBN<<endl;
  }
  void change_details()
  {
    cout<<"Enter book name\n";
    cin>>title;
    cout<<"Enter book author\n";
    cin>>author;
    cout<<"Enter book ISBN\n";
    cin>>ISBN;
    show_details();
  }

};
int main()
{
  book obj;
  obj.title="Chanakya in daily life";
  obj.author="Radhakrishnan Pillai";
  obj.ISBN=20248808;
  obj.show_details();
  obj.change_details();
  
  return 0;
}
