#include<iostream>

using namespace std;

struct student
{  int rno;
   char nm[80];
   int dd,mm,yy;
   int mark1, mark2, mark3, mark4;
};

void display(student s)
{  cout<<"\nName : "<<s.nm
       <<"\nRoll number : "<<s.rno
       <<"\nDate of birth : "<<s.dd<<'-'<<s.mm<<'-'<<s.yy
       <<"\nMarks in four subjects : "<<s.mark1<<" "<<s.mark2<<" "<<s.mark3<<" "<<s.mark4;
   return;
}


int main()
{
   student st;
   cout<<"\nEnter roll number : ";
   cin>>st.rno;
   cout<<"\nEnter name : ";
   cin>>st.nm;
   cout<<"\nEnter date of birth : ";
   cin>>st.dd>>st.mm>>st.yy;
   cout<<"\nEnter marks in four subjects : ";
   cin>>st.mark1>>st.mark2>>st.mark3>>st.mark4;
   cout<<"\n\nInformation stored in structure\n";
   display(st);
   return 0;

}
