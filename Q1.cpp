//#include <iostream>
//#include <string>
//using namespace std;
//class Course
//{
//    string coursename;
//    string coursecode;
//
//public:
//    void setcname(const string& name) 
//    {
//        coursename = name;
//    }
//
//    void setccode(const string& code) 
//    {
//        coursecode = code;
//    }
//
//    string getcname() const 
//    {
//        return coursename;
//    }
//
//    string getccode() const 
//    {
//        return coursecode;
//    }
//};
//
//class Teacher 
//{
//    string tname;
//
//
//public:
//    int course_count;
//    Course* courses1;
//
//    Teacher() : courses1(nullptr), course_count(0)
//    {
//
//    }
//
//    void settname(const string& name) 
//    {
//        tname = name;
//    }
//
//    string gettname() const
//    {
//        return tname;
//    }
//
//    void setcourses(int num) 
//    {
//        if (courses1) 
//        {
//            delete[] courses1;
//        }
//        courses1 = new Course[num];
//        course_count = num;
//    }
//
//    Course& getCourse(int index) 
//    {
//        if (index >= 0 && index < course_count) 
//        {
//            return courses1[index];
//        }
//        else 
//        {
//            throw out_of_range("Index out of range");
//        }
//    }
//
//    ~Teacher() 
//    {
//        delete[] courses1;
//    }
//};
//
//class Student
//{
//    string studentname;
//    string rollno;
//   
//
//public:
//    int course_count;
//    Course* courses;
//
//    Student() : courses(nullptr), course_count(0) 
//    {
//
//    }
//
//    void setstdname(const string& name)
//    {
//        studentname = name;
//    }
//
//    string getstdname() const 
//    {
//        return studentname;
//    }
//
//    void setroll(const string& roll)
//    {
//        rollno = roll;
//    }
//
//    string getroll() const 
//    {
//        return rollno;
//    }
//
//    void setcourses(int num) 
//    {
//        if (courses) 
//        {
//            delete[] courses;
//        }
//        courses = new Course[num];
//        course_count = num;
//    }
//
//    Course& getCourse(int index) 
//    {
//        if (index >= 0 && index < course_count) 
//        {
//            return courses[index];
//        }
//        else {
//            throw out_of_range("Index out of range");
//        }
//    }
//
//    ~Student()
//    {
//        delete[] courses;
//    }
//};
//
//int main() 
//{
//    Course cou[3];
//    string coursen;
//    string coursecode;
//    // Inputting course information with its name and code
//    for (int i = 0; i < 3; i++) 
//    {
//        cout << "Enter the name of Course " << i + 1 << ": ";
//        cin >> coursen;
//        cou[i].setcname(coursen);
//
//        cout << "Enter the code of Course " << i + 1 << ": ";
//        cin >> coursecode;
//        cou[i].setccode(coursecode);
//    }
//    //outputting courses for reference
//    cout << "----------------------------------------------------------------------------" << endl;
//    cout << "Following are the course names with their respective codes!" << endl;
//    for (int i = 0; i < 3; i++)
//    {
//        cout << "Course " << i + 1 << ": " << cou[i].getcname() << " (" << cou[i].getccode() << ")" << endl;
//    }
//
//    cout << "----------------------------------------------------------------------------" << endl;
//
//    // Inputting the students and their respective data along with courses each student wants to study
//    int num1;
//    cout << "How many students you want to add? ";
//    cin >> num1;
//    Student* s = new Student[num1];
//
//    for (int sIdx = 0; sIdx < num1; sIdx++) 
//    {
//        string name;
//        cout << "Enter the name of Student " << sIdx + 1 << ": ";
//        cin >> name;
//        s[sIdx].setstdname(name);
//
//        string roll;
//        cout << "Enter the roll number of Student " << sIdx + 1 << ": ";
//        cin >> roll;
//        s[sIdx].setroll(roll);
//
//        int numc;
//        cout << "Enter how many courses this student will study: ";
//        cin >> numc;
//        s[sIdx].setcourses(numc);
//
//        for (int innerIdx = 0; innerIdx < numc; innerIdx++) 
//        {
//            string choice;
//            cout << "Enter the course code this student will study: ";
//            cin >> choice;
//
//            bool courseFound = false;
//            for (int j = 0; j < 3; j++)
//            {
//                if (cou[j].getccode() == choice) 
//                {
//                    s[sIdx].getCourse(innerIdx).setccode(choice);
//                    s[sIdx].getCourse(innerIdx).setcname(cou[j].getcname());
//                    courseFound = true;
//                    break;
//                }
//            }
//            // checking if cource code is valid
//            if (!courseFound) 
//            {
//                cout << "Invalid course code! Try again." << endl;
//                innerIdx--; // Retry same index
//            }
//        }
//    }
//
//    // Inputting the teachers and their respective data along with courses each teacher wants to teach
//    int num2;
//    cout << "How many teachers you want to add? ";
//    cin >> num2;
//    Teacher* t = new Teacher[num2];
//
//    for (int tIdx = 0; tIdx < num2; tIdx++) 
//    {
//        string name;
//        cout << "Enter the name of Teacher " << tIdx + 1 << ": ";
//        cin >> name;
//        t[tIdx].settname(name);
//
//        int numc;
//        cout << "Enter how many courses this teacher will teach: ";
//        cin >> numc;
//        t[tIdx].setcourses(numc);
//
//        for (int innerIdx = 0; innerIdx < numc; innerIdx++) 
//        {
//            string choice;
//            cout << "Enter the course code this teacher will teach: ";
//            cin >> choice;
//
//            bool courseFound = false;
//            for (int j = 0; j < 3; j++)
//            {
//                if (cou[j].getccode() == choice) 
//                {
//                    t[tIdx].getCourse(innerIdx).setccode(choice);
//                    t[tIdx].getCourse(innerIdx).setcname(cou[j].getcname());
//                    courseFound = true;
//                    break;
//                }
//            }
//
//            //checking if coursecode is valid
//            if (!courseFound) {
//                cout << "Invalid course code! Try again." << endl;
//                innerIdx--; 
//            }
//        }
//    }
//    int choice1 = 0;
//    while (choice1 != -1) 
//    {
//        cout << "What you want to do? Press 1 to view information or -1 to exit: ";
//        cin >> choice1;
//        //printing complete information about teachers and students
//        if (choice1 == 1) 
//        {
//            // Display students' information
//            cout << "Student information:" << endl;
//            for (int sIdx = 0; sIdx < num1; sIdx++)
//            {
//                cout << "Student " << sIdx + 1 << ":" << endl;
//                cout << "Name: " << s[sIdx].getstdname() << endl;
//                cout << "Roll No: " << s[sIdx].getroll() << endl;
//
//                cout << "Courses:" << endl;
//                for (int courseIdx = 0; courseIdx < s[sIdx].course_count; courseIdx++) 
//                {
//
//                    cout << "  - " << s[sIdx].getCourse(courseIdx).getcname() << " ("
//                        << s[sIdx].getCourse(courseIdx).getccode() << ")" << endl;
//                }
//            }
//
//            // Display teachers' information
//            cout << "----------------------------------------------------------------------------" << endl;
//            cout << "Teacher information:" << endl;
//
//            for (int tIdx = 0; tIdx < num2; tIdx++) 
//            {
//                cout << "Teacher " << tIdx + 1 << ":" << endl;
//                cout << "Name: " << t[tIdx].gettname() << endl;
//
//                cout << "Courses:" << endl;
//                for (int courseIdx = 0; courseIdx < t[tIdx].course_count; courseIdx++) 
//                {
//                    cout << "  - " << t[tIdx].getCourse(courseIdx).getcname() << " ("
//                        << t[tIdx].getCourse(courseIdx).getccode() << ")" << endl;
//                }
//            }
//        }
//    }
//    //deleting dynamically allocated memory
//     delete[] s;
//    delete[] t;
//
//    return 0;
//}
