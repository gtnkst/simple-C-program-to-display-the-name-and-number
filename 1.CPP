#include <iostream.h>
#include<conio.h>
using namespace std;
class person
{
public:
string name;
int number;
};
Void main()
{
person obj;
cout<<"Enter the Name :";
cin>>obj.name;
cout<<"Enter the Number :";
cin>>obj.number;
cout << obj.name << ": " << obj.number << endl;
getch();
}
