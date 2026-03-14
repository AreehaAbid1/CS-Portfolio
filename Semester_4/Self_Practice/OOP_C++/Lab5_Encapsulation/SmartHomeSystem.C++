#include<iostream>
#include<string>
using namespace std;

class Appliance{
    private:
    string name;
    float power;
    int hours;
    public:
    Appliance(string n, float p, int h){
        name = n;
        power = p;
        hours = h;
    }
    //getter
    string getName(){
        return name;
    }
    float getPower(){
        return power;
    }
    int getHours(){
        return hours;
    }
    //setters
    void setName(string n){
        name = n;
    }
    void setPower(float p){
        power = p;
    }
    void setHours(int h){
        hours = h;
    }
    //energy comparing function
    string compareEnergy(Appliance a1, Appliance a2){
        //float energyConsumed = power * (hours/3600);
        if(a1.power*(a1.hours*3600) > a2.power*(a2.hours*3600)){
            return a1.name;
        }
        else if(a1.power*(a1.hours*3600) < a2.power*(a2.hours*3600)){
            return a2.name;
        }
        else{
            return "both consume same energy";
        }
    }
};

int main(){
    Appliance app1("Fridge", 5.5, 12);
    Appliance app2("AC", 18.3, 4);
    cout<<"More energy consumption by: "<<app1.compareEnergy(app1, app2);
    cout<<endl;
    app1.setHours(24);
    cout<<"More energy consumption by: "<<app2.compareEnergy(app1, app2);
    cout<<endl;
    app2.setHours(24);
    app2.setPower(5.5);
    cout<<"More energy consumption by: "<<app2.compareEnergy(app1, app2);
}