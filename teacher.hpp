#pragma once
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "student.hpp"

class Teacher
{
public:
    Teacher(const string& name)
    {
        m_name = name;
    }
    ~Teacher()
    {
    }


    void addStudent(shared_ptr<Student>& student)
    {
        m_students.push_back(student);
    }

    void AllStudents()
    {
        if (!m_students.empty())
        {
            cout << "Teacher: " << m_name << endl;

            for (const auto& student : m_students)
            {
                cout <<"Student: "<< student.lock()->nameStudent() << endl;
            }
        }
    }

private:
    string m_name;
    vector<weak_ptr<Student>> m_students;

};