#include <bits/stdc++.h>
using namespace std;

class Course
{
protected:
    int duration;
    string instructor;
    int number;

public:
    Course(int dur, string inst, int maxStu)
    {
        duration = dur;
        instructor = inst;
        number = maxStu;
    }

    virtual void getCourseInfo() = 0;
};

class Lecture : public Course
{
private:
    string topic;

public:
    Lecture(int dur, string inst, int maxStu, string tp) : Course(dur, inst, maxStu)
    {
        topic = tp;
    }

    void getCourseInfo()
    {
        cout << "Lecture\n";
        cout << "Topic: " << topic << endl;
        cout << "Duration: " << duration << " hours\n";
        cout << "Name of the Instructor: " << instructor << endl;
        cout << "No. of Student Allowed: " << number << endl;
    }
};

class Lab : public Course
{
private:
    string labNumber;

public:
    Lab(int dur, string inst, int maxStu, string lab) : Course(dur, inst, maxStu)
    {
        labNumber = lab;
    }

    void getCourseInfo()
    {
        cout << "Lab\n";
        cout << "Lab Number: " << labNumber << endl;
        cout << "Duration: " << duration << " hours\n";
        cout << "Name of the Instructor: " << instructor << endl;
        cout << "No. of Student Allowed: " << number << endl;
    }
};

class Tutorial : public Course
{
private:
    string tutorialNumber;

public:
    Tutorial(int dur, string inst, int maxStu, string tut) : Course(dur, inst, maxStu)
    {
        tutorialNumber = tut;
    }

    void getCourseInfo()
    {
        cout << "Tutorial\n";
        cout << "Tutorial Number: " << tutorialNumber << endl;
        cout << "Duration: " << duration << " hours\n";
        cout << "Name of the Instructor: " << instructor << endl;
        cout << "No. of Student Allowed: " << number << endl;
    }
};

int main()
{
    Course *c1 = new Lecture(1, "Dr.Ashok Kherodia ", 60, "MicroController");
    c1->getCourseInfo();

    Course *c2 = new Lab(3, "Mr.Satyender Singh Chouhan", 30, "OOSD LAB");
    c2->getCourseInfo();

    Course *c3 = new Tutorial(1, "Prof.Chetna Sharma", 20, "Tutorial 1");
    c3->getCourseInfo();

    return 0;
}

