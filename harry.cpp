#include <bits/stdc++.h>
using namespace std;

// public mode : public member will  be inherited as public.
// private mode : public member will  be inherited as private.
// private members can never be inhereted in any mode.
// class Professer
// {
// public:
//     int id, salary;
//     Professer() {}
//     Professer(int id)
//     {
//         this->id = id;
//     }
// };

// class Employee : private Professer
// {
// public:
//     Employee(int ids)
//     {
//         this->id = ids;
//     }
//     void getId()
//     {
//         cout << id << endl;
//         cout << salary << endl;
//     }
// };

// int main()
// {
//     Professer p1(3);
//     cout << p1.id << endl;
//     Employee e1(4);
//     e1.getId();
// }

// class Student
// {
// protected:
//     int rollNo;

// public:
//     void setRoll(int rn)
//     {
//         this->rollNo = rn;
//     };
//     void getRoll(void)
//     {
//         cout << "The Rollno. of the student is " << rollNo << endl;
//     }
// };

// class Exam : public Student
// {
// protected:
//     int bio, chem;

// public:
//     void setMarks(int bio, int chem)
//     {
//         this->bio = bio;
//         this->chem = chem;
//     };
//     void getMarks(void)
//     {
//         cout << "The Marks of the student is " << bio << " ," << chem << endl;
//     }
// };

// class Result : public Exam
// {
// protected:
//     int precentage;

// public:
//     void getPer(void)
//     {
//         cout << "The percentage obtained is " << (bio + chem) / 2 << "%" << endl;
//     }
// };

// int main()
// {
//     Result r1;
//     r1.setRoll(11);
//     r1.setMarks(85, 79);
//     r1.getRoll();
//     r1.getMarks();
//     r1.getPer();
// }

// class Base
// {
// protected:
//     int a;

// public:
//     void setA(int A)
//     {
//         a = A;
//     };
// };

// class Base1
// {
// protected:
//     int b;

// public:
//     void setB(int B)
//     {
//         b = B;
//     };
// };

// class Derived : public Base1, public Base
// {
// public:
//     void show()
//     {
//         cout << a << endl;
//         cout << b << endl;
//         cout << a + b << endl;
//     }
// };
// int main(){
//     Derived d1;
//     d1.setA(3253);
//     d1.setB(8978);
//     d1.show();
// }

// class Student
// {
// protected:
//     int rollNo;

// public:
//     void setRoll(int rn)
//     {
//         this->rollNo = rn;
//     };
//     void getRoll(void)
//     {
//         cout << "The Rollno. of the student is " << rollNo << endl;
//     }
// };

// class Exam : virtual public Student
// {
// protected:
//     int bio, chem;

// public:
//     void setMarks(int bio, int chem)
//     {
//         this->bio = bio;
//         this->chem = chem;
//     };
//     void getMarks(void)
//     {
//         cout << "The Marks of the student is " << bio << " ," << chem << endl;
//     }
// };

// class Sports : virtual public Student
// {
// protected:
//     float score;

// public:
//     void setScore(float sr)
//     {
//         score = sr;
//     }
//     void getScore()
//     {
//         cout << "your Score was: " << score << endl;
//     }
// };

// class Result : public Exam, public Sports
// {
// protected:
//     float total;

// public:
//     void getResult()
//     {
//         total = bio + chem + score;
//         cout << "your Result: " << total;
//     }
// };

// int main()
// {
//     Result Dharmesh;
//     Dharmesh.setRoll(30);
//     Dharmesh.getRoll();
//     Dharmesh.setScore(45);
//     Dharmesh.setMarks(55, 65);
//     Dharmesh.getResult();
// }

// class SimpleCalculator
// {
// protected:
//     float a, b;

// public:
//     SimpleCalculator(){};
//     SimpleCalculator(float x, float y) : a(x), b(y) {} // first declare first initilised like

//     void add()
//     {
//         cout << a + b << endl;
//     }

//     void sub()
//     {
//         cout << a - b << endl;
//     }

//     void mul()
//     {
//         cout << a * b << endl;
//     }

//     void div()
//     {
//         cout << a / b << endl;
//     }
// };

// class ScienctificCalculator : virtual public SimpleCalculator
// {
// public:
//     ScienctificCalculator(){}
//     ScienctificCalculator(float x, float y) : SimpleCalculator(x, y) {}

//     void logr()
//     {
//         cout << log(a) << endl;
//     }

//     void log10r()
//     {
//         cout << log10(a) << endl;
//     }
// };

// class Hybrid : public ScienctificCalculator
// {
// public:
//     Hybrid(){};
//     Hybrid(float p, float q) : SimpleCalculator(p, q), ScienctificCalculator(p, q) {}
//     Hybrid &setData(float a, float b)
//     {
//         this->a = a;
//         this->b = b;
//         return *this;
//     }
//     void getData()
//     {
//         add();
//         sub();
//         mul();
//         div();
//         logr();
//         log10r();
//     }
// };

// int main()
// {
//     // Hybrid h1(3, 4);
//     // h1.setData(5,6).getData();
//     // Hybrid *p = new Hybrid(3,4);
//     // (*p).getData();
//     // p->getData();
//     // int size = 3;
//     // int p,q;
//     // Hybrid *ptr = new Hybrid[size]{{1, 2}, {3, 4}, {4, 5}};
//     // Hybrid *temp= ptr;
//     // for (int j = 0; j < size; j++)
//     // {
//     //     cout<<"Enter the values for p and q: ";
//     //     cin>>p>>q;
//     //     // ptr[j].setData(p,q);
//     //     ptr->setData(p,q);
//     //     ptr++;
//     // }
//     // for (int i = 0; i < size; i++)
//     // {
//     //     // ptr[i].getData();
//     //     temp->getData();
//     //     temp++;
//     // }
// }

// int main(){
//     int a=4;
//     int *ptr=&a;
//     cout<<&a<<endl;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     *ptr=444;
//     cout << &a << endl;
//     cout << ptr << endl;
//     cout << *ptr<<endl;
//     cout<<a;
// }

// class Base
// {
// public:
//     int bas;

//     virtual void display()
//     {
//         cout << "value of base: " << bas << endl;
//     }
// };

// class Derived:public Base
// {
// public:
//     int der;

//     void display()
//     {
//         cout << "value of derived: " << der << endl;
//     }
// };

// int main()
// {
//     Base objBase;
//     Derived objDerived;
//     Base *basePtr;
//     basePtr= &objDerived;

//     basePtr->bas = 69;
//     // basePtr->der=03;
//     basePtr->display();

//     Derived *derPtr=&objDerived;
//     derPtr->der=96;
//     derPtr->display();
// }

// class CWH
// {
// protected:
//     string title;
//     float rating;

// public:
//     CWH(string t, float r) : title(t), rating(r){};
//     virtual void display() {}
// };

// class CWHVideo : public CWH
// {
// protected:
//     float videoLen;

// public:
//     CWHVideo(string s, float r, float vl) : CWH(s, r)
//     {
//         videoLen = vl;
//     }
//     void display()
//     {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings: " << rating << " out of 5 stars" << endl;
//         cout << "Length of this video is: " << videoLen << " minutes" << endl;
//     }
// };

// class CWHText : public CWH
// {
// protected:
//     float wordlen;

// public:
//     CWHText(string s, float r, float wl) : CWH(s, r)
//     {
//         wordlen = wl;
//     }
//     void display()
//     {
//         cout << "This is an amazing video with title " << title << endl;
//         cout << "Ratings: " << rating << " out of 5 stars" << endl;
//         cout << "No of words in this text tutorial is: " << wordlen << " words" << endl;
//     }
// };

// int main()
// {
//     string title;
//     float rating, vlen;
//     int words;

//     title = "Django tutorial";
//     vlen = 4.56;
//     rating = 4.89;
//     CWHVideo djVideo(title, rating, vlen);

//     title = "Django tutorial Text";
//     words = 433;
//     rating = 4.19;
//     CWHText djText(title, rating, words);

//     CWH *tuts[2];
//     tuts[0] = &djVideo;
//     tuts[1] = &djText;

//     tuts[0]->display();
//     tuts[1]->display();

//     return 0;
// }

// void isPalindrome(int x)
// {
//     vector<int> vt;
//     string str = to_string(x);
//     int q = x;
//     int r = 0;
//     for (int i = 0; i < str.length(); i++)
//     {
//         r = q % 10;
//         q = q / 10;
//         vt.push_back(r);
//     }
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == vt[i])
//         {
//         }
//         else
//         {
//             cout << str[i] << " " << vt[i] << endl;
//         }
//     }
// }

int main(){
    int *ptr=0;
    int a=10;
    *ptr=a;
    cout<<*ptr<<endl;
}