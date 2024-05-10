#include <iostream>
#include <string>
using namespace std;
class students{
public:
    string Names;
    int RollNo;
    char grades;
    students(string n, int r, char g)
    {
        Names = n;
        RollNo = r;
        grades = g;
    }
    void display(){
        cout << "Name:" << Names << endl;
        cout << "Roll NO. :" << RollNo << endl;
        cout << "Grades:" << grades << endl;
    }
};
int main(){
    students stud[3] = {
            students("ABC", 111, 'A'),
            students("XYZ", 222, 'B'),
            students("MNO", 333, 'C')
    };
    cout << "Student Information:" << endl;
    for(int i = 0; i < 3; i++){
        stud[i].display();
        cout << endl;
    }
    return 0;
}