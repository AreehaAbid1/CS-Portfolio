#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator * (const Complex& other) {
        float r = (real * other.real) - (imag * other.imag);
        float i = (real * other.imag) + (imag * other.real);
        return Complex(r, i);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(1, 4);

    Complex sum = c1 + c2;
    Complex prod = c1 * c2;

    cout << "Sum: ";
    sum.display();

    cout << "Product: ";
    prod.display();

    return 0;
}
