#include <iostream>
using namespace std;

class Counter {
protected:
    int count;
public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}

    Counter& operator++() {
        ++count;
        return *this;
    }

    Counter& operator--() {
        --count;
        return *this;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

class EnhancedCounter : public Counter {
public:
    EnhancedCounter() : Counter() {}
    EnhancedCounter(int c) : Counter(c) {}

   
    using Counter::operator++;
    using Counter::operator--;


    EnhancedCounter operator++(int) {
        EnhancedCounter temp = *this;
        count++;
        return temp;
    }

    
    EnhancedCounter operator--(int) {
        EnhancedCounter temp = *this;
        count--;
        return temp;
    }
};

int main() {
    EnhancedCounter ec(5);
    ec.display();

    ec++;        
    ec.display();

    ++ec;        
    ec.display();

    ec--;        
    ec.display();

    --ec;       
    ec.display();

    return 0;
}
