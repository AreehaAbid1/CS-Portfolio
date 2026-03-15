 #include<iostream>
 #include<string>
 using namespace std;

 class Makeup{
    private:
    string name;
    float price;
    int availableQuantity;
    static double allMakeupValue;
    public:
    Makeup(string n, float p, int aq){
        name = n;
        price = p;
        availableQuantity = aq;
        allMakeupValue += price * availableQuantity;
    }
    Makeup(){}
    //getter
    string getName(){
        return name;
    }
    float getPrice(){
        return price;
    }
    int getAvailableQuantity(){
        return availableQuantity;
    }
    double getAllMakeupValue(){
        return allMakeupValue;
    }
    //setters
    void setName(string n){
        name = n;
    }
    void setPrice(float p){
        allMakeupValue -= price * availableQuantity;
        price = p;
        allMakeupValue += price * availableQuantity;
    }
    void setAvailableQuantity(int aq){
        allMakeupValue -= price * availableQuantity;
        availableQuantity = aq;
        allMakeupValue += price * availableQuantity;
    }
 };

 double Makeup :: allMakeupValue = 0.0;

 int main(){
    Makeup m1("Lipstick", 1100.55, 15);
    m1.setAvailableQuantity(30);
    Makeup m2("Luminous Concealor", 5500.99, 8);
    m2.setName("Flawless Luminous Concealor");
    Makeup m3("Eyeliner", 675.00, 20);
    m3.setPrice(650.45);
    cout<<"MAKEUP SHOP PRODUCTS"<<endl;
    cout<<"1st Product Name: "<<m1.getName()<<endl;
    cout<<"1st Product Price: "<<m1.getPrice()<<endl;
    cout<<"1st Product Quantity: "<<m1.getAvailableQuantity()<<endl;
    cout<<"2nd Product Name: "<<m2.getName()<<endl;
    cout<<"2nd Product Price: "<<m2.getPrice()<<endl;
    cout<<"2nd Product Quantity: "<<m2.getAvailableQuantity()<<endl;
    cout<<"3rd Product Name: "<<m3.getName()<<endl;
    cout<<"3rd Product Price: "<<m3.getPrice()<<endl;
    cout<<"3rd Product Quantity: "<<m3.getAvailableQuantity()<<endl;
    Makeup m4;
    cout<<"All Makeup Value: "<<m4.getAllMakeupValue();
 }