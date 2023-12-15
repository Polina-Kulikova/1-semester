//Вариант 6.
//Вам даны два объекта, которые связаны между собой. Необходимо создать 2 класса, описывающие эти объекты и принадлежность 2го объекта 1ому.
//Экземпляры классом храните в хипе.
//Преподаватель и студенты.
#include <iostream>
#include <vector>
class Students
{
private:
    unsigned int m_id;
    std::string m_name;
    std::string m_lastname;

public:
    Students(int id, std::string name, std::string lastname)
    {
        m_id = id;
        m_name = name;
        m_lastname = lastname;
    }
    std::string Name()
    {
        return m_name;
    }
    std::string LastName()
    {
        return m_lastname;
    }
};

class Teacher
{
private:
    unsigned int m_id;
    std::string m_name;
    std::string m_lastname;
    std::vector<Students*> m_student;

public:
    Teacher(int id, std::string name, std::string lastname)
    {
        m_id = id;
        m_name = name;
        m_lastname = lastname;
    }
    void AddStudents (Students* student)
    {
        m_student.push_back(student); //добавляем в конец
    }
    void PrintStudentd()
    {
        for (int i = 0; i < m_student.size(); i++)
        {
            std::cout << m_student[i]->Name() <<" "<< m_student[i]->LastName() << std::endl;
        }
    }
};

int main()
{
    Teacher* teacher = new Teacher(0, "Bennett", "Malone");
    Students* student1 = new Students(0, "Kory", "Lester");
    teacher ->AddStudents(student1);
    Students* student2 = new Students(1, "Thomasina", "Wilson");
    teacher ->AddStudents(student2);
    Students* student3 = new Students(2, "Walter", "Wade");
    teacher ->AddStudents(student3);
    Students* student4 = new Students(3, "Esmond", "Carter");
    teacher ->AddStudents(student4);
    Students* student5 = new Students(4, "Frank", "Hutchinson");
    teacher ->AddStudents(student5);
    teacher ->PrintStudentd();

    delete student1;
    delete student2;
    delete student3;
    delete student4;
    delete student5;
    delete teacher;
    return 0;
}
