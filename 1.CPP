#include <iostream.h>
#include<conio.h>
class student
{
public:
char name;
int rollno,age;
};
class marks : public student
{
   public:
   int marks1,marks2,marks3,marks4,marks5;
   void marksheet ()
   {

      cout<<"enter maarks of 5 subjects";
     cin>>marks1>>marks2>>marks3>>marks4>>marks5;
   }
};
int main()
{
   student stud;
   cout<<"enter name"<<stud.name<<endl;
   cout<<"enter age and roll"<<stud.age<<endl <<stud.rollno<<endl;
   marks m;
   m.marksheet();
   getch();
   return 0;

}