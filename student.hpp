#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "teacher.hpp"

using namespace std; 

class Teacher;

class Student
{
public:
    Student(string name)
    {
        m_student = name;
    }
    ~Student()
    {
    }

    string nameStudent() { return m_student; }
    shared_ptr<Teacher> getTeacher() { m_teacher; }

    void addTeacher(shared_ptr<Teacher>& teacher)
    {
        m_teacher = teacher;
    }

private:
    string m_student;
    weak_ptr<Teacher> m_teacher;
};