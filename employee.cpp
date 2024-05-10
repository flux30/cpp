#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int employeeNumber;
    string employeeName;
    float basic;
    float da;
    float it;
    float netSalary;
public:
    Employee(int empNumber, string empName, float basicSalary, float daAmount, float
    itAmount) {
        employeeNumber = empNumber;
        employeeName = empName;
        basic = basicSalary;
        da = daAmount;
        it = itAmount;
        netSalary = basic + da - it;
    }
    void printDetails() {
        cout << "Employee Number: " << employeeNumber << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "DA: " << da << endl;
        cout << "IT: " << it << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};
int main() {
    Employee emp(101, "XYZ", 5000, 1000, 500);
    emp.printDetails();
    return 0;
}