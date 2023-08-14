/*Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details 
of the student with roll no. 2.*/

#include<iostream>
using namespace std;

int main()
{
  struct student
  {
    int roll_no;
    string name;
    int age;
  };

  struct student stud[3];

  for(int i=0; i<=2; i++)
  {
    cout << "Student " << i+1 << endl;
    stud[i].roll_no = i+1;
    cout << "Enter name :\n";
    cin >> stud[i].name;
    cout << "Enter age :\n";
    cin >> stud[i].age;
  }

  // for(int i=0; i<=4; i++)
  // {
  //   if(stud[i].roll_no == 2)
  //   {
  //     cout << "Student " << i+1 << endl;
  //     cout << "Roll no. : " << stud[i].roll_no << endl;
  //     cout << "Name : " << stud[i].name << endl;
  //     cout << "Age : " << stud[i].age << endl;
  //   }
  // }

  for (int i=0;i<=2;i++){
    cout<<"roll_no-"<<stud[i].roll_no<<endl;
    cout<<"name-"<<stud[i].name<<endl;
    cout<<"age-"<<stud[i].age<<endl;
    

  }
  return 0;
  
}