#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Add more relevant fields to struct
//gender: 0-Male, 1-Female, 3-Other
struct Student{
    int id;
    string name;
    string gender;
};

void printStudent(Student* student){
    cout<<"Student ID "<<student->id<<"\n";
    cout<<"Student Name "<<student->name<<"\n";
    cout<<"Student Gender "<<student->gender<<"\n";
    cout<<"-------------------------------------\n";
}

int main() {
    vector<Student*> students;
    while(1){
        cout<<" 1. Enter Student\n 2. Display Students\n 3. Exit\n";
        int choice;
        cin>>choice;
        if(choice==1){
            Student* student = new Student;
            cout<<"Enter Student Id\n";
            cin>>student->id;
            cout<<"Enter Student Name\n";
            cin>>student->name;
            cout<<"Enter Student Gender\n";
            cin>>student->gender;
            students.push_back(student);
        } 
        else if(choice==2){
            for(auto s : students)
                printStudent(s);
        } else {
            break;
        }
    }
}
