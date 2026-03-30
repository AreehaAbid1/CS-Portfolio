#include<iostream>
#include<string>
const int PER_SUB_STD = 20;
using namespace std;
 class Course{
    public:
    int currentStd;
    char choice;

    //pure virtual func
    virtual void registerCourse() = 0;

    void seatAvailability(){
        cout<<"Enter current students enrolled: "<<endl;
        cin>>currentStd;
        if(currentStd<PER_SUB_STD){
            cout<<"checking..."<<endl;
            cout<<"Seat Available"<<endl;
            currentStd+=1;
        }
        else{
            cout<<"No Seat Available"<<endl;
        }
    }

    void preReqClear(){
        cout<<"Is your pre-requisite for this course clear? (y/n)"<<endl;
        cin>>choice;
        if(choice=='y'||choice=='Y'){
            cout<<"Pre-req cleared"<<endl;
        }
        else if(choice=='n'||choice=='N'){
            cout<<"Pre-req not cleared"<<endl;
        }
    }
 };

 class MathCourse : public Course{
    public:
    void registerCourse()override{
        cout<<"MATH COURSE REGISTRATION"<<endl;
        cout<<"Do you want to get registered in Math Course: "<<endl;
        cin>>choice;
        if(choice=='y'||choice=='Y'){
            seatAvailability();
            preReqClear();
            cout<<"Are both criterias positive? (Seat Availability and PreReq Clarity)"<<endl;
            cin>>choice;
            if(choice=='y'||choice=='Y'){
                cout<<endl<<"===MATH COURSE REGISTERED SUCCESSULLY==="<<endl<<endl;
            }
            else{
            cout<<endl<<"---MATH COURSE REGISTRATION UNSUCCESSFULL---"<<endl<<endl;
        }
        }
        else{
            cout<<endl<<"---MATH COURSE REGISTRATION UNSUCCESSFULL---"<<endl<<endl;
        }
    }
 };

 class ProgrammingCourse : public Course{
    public:
    void registerCourse()override{
        cout<<"PROGRAMMING COURSE REGISTRATION"<<endl;
        cout<<"Do you want to get registered in Programming Course: "<<endl;
        cin>>choice;
        if(choice=='y'||choice=='Y'){
            seatAvailability();
            preReqClear();
            cout<<"Are both criterias positive? (Seat Availability and PreReq Clarity)"<<endl;
            cin>>choice;
            if(choice=='y'||choice=='Y'){
                cout<<endl<<"===PROGRAMMING COURSE REGISTERED SUCCESSULLY==="<<endl<<endl;
            }
            else{
            cout<<endl<<"---MATH COURSE REGISTRATION UNSUCCESSFULL---"<<endl<<endl;
        }
        }
        else{
            cout<<endl<<"---PROGRAMMING COURSE REGISTRATION UNSUCCESSFULL---"<<endl<<endl;
        }
    }
 };

 int main(){
    MathCourse mathstd;
    mathstd.registerCourse();
    ProgrammingCourse progstd;
    progstd.registerCourse();
 }