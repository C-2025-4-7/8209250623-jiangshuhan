#include <iostream>
#include"student.h" 
#include <cstring>
using namespace std;
void Student::display()         
{
    cout << "num£º " << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(int n, const char* nm, char s) {
    num = n; 
    strcpy(name, nm);  
    sex = s;  
}