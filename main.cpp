#include <iostream>
#include <memory> 
#include <string>
#include <vector>
#include <map>
#include "Teacher.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    auto first_student{ make_shared<Student>("Yulia") };
    auto second_student{ make_shared<Student>("Marina") };
    auto teacher{ make_shared<Teacher>("Mr.Sinukhin") };

    teacher->addStudent(first_student);
    teacher->addStudent(second_student);
    teacher->AllStudents();

    return 0;
}