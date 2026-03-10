#include <iostream>
#include <string>
using namespace std;

class Remarks {
    string remark;
public:
    Remarks(string r = "") : remark(r) {}

    Remarks& operator+=(const Remarks& r) {
        remark += " " + r.remark;
        return *this;
    }

    void display() {
        cout << remark << endl;
    }

    string getRemark() const {
        return remark;
    }
};

int main() {
    Remarks remark1("Excellent performance.");
    Remarks remark2("Needs improvement in punctuality.");
    Remarks finalRemark;
    finalRemark = remark1 += remark2;
    finalRemark.display();
    return 0;
}
