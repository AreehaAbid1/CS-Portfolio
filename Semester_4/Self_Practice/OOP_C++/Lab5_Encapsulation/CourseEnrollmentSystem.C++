#include<iostream>
#include<string>
using namespace std;

class Course{
    private:
    string courseName;
    int courseId;
    float enrollmentFee;
    static int courseCount;
    public:
    Course(string cn, int ci, float ef){
        courseName = cn;
        courseId = ci;
        enrollmentFee = ef;
        courseCount++;
    }
    Course(){}
    //getters
    string getCourseName(){
        return courseName;
    }
    int getCourseId(){
        return courseId;
    }
    float getEnrollmentFee(){
        return enrollmentFee;
    }
    int getCourseCount(){
        return courseCount;
    }
    //setters
    void setCourseName(string cn){
        courseName = cn;
    }
    void setCourseId(int ci){
        courseId = ci;
    }
    void setEnrollmentFee(float ef){
        enrollmentFee = ef;
    }
};

int Course :: courseCount = 0;

int main(){
    Course c1("OOP", 101, 12000);
    Course c2("DSA", 404, 15000);
    Course c3("COAL", 200, 8000);
    c3.setEnrollmentFee(10000);
    Course c4;
    cout<<"Number of courses available: "<<c4.getCourseCount();
    cout<<endl;
    cout<<"COURSE DETAILS"<<endl;
    cout<<"Course Name: "<<c1.getCourseName()<<endl;
    cout<<"Course ID: "<<c1.getCourseId()<<endl;
    cout<<"Enrollment Fee: "<<c1.getEnrollmentFee()<<endl;
    cout<<"Course Name: "<<c2.getCourseName()<<endl;
    cout<<"Course ID: "<<c2.getCourseId()<<endl;
    cout<<"Enrollment Fee: "<<c2.getEnrollmentFee()<<endl;
    cout<<"Course Name: "<<c3.getCourseName()<<endl;
    cout<<"Course ID: "<<c3.getCourseId()<<endl;
    cout<<"Enrollment Fee: "<<c3.getEnrollmentFee()<<endl;
}