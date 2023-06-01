// Nguyen Huu Hau 20215573
#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct Complex
{
    double real;
    double imag;
};
// da nang hoa toan tu "+"
Complex operator+(Complex a, Complex b)
{
    Complex tmp;
    tmp.real = a.real + b.real;
    tmp.imag = a.imag + b.imag;
    return tmp;
}
// Nguyen Huu Hau 20215573
// da nang hoa toan tu "-"
Complex operator - (Complex a, Complex b)
{
    Complex tmp;
    tmp.real = a.real - b.real;
    tmp.imag = a.imag - b.imag;
    return tmp;
}
// Nguyen Huu Hau 20215573
// da nang hoa toan tu "*"
Complex operator * (Complex a, Complex b)
{
    Complex tmp;
    tmp.real = a.real * b.real - a.imag * b.imag;
    tmp.imag = a.real * b.imag + a.imag * b.real;
    return tmp;
}
// da nang hoa toan tu "/"
Complex operator / (Complex a, Complex b)
{
    Complex tmp;
    double mauSo = pow(b.real, 2) + pow(b.imag, 2);
    Complex b_1;
    b_1.real = b.real;
    b_1.imag = -b.imag;
    tmp.real = (a.real * b_1.real - a.imag * b_1.imag) / mauSo;
    tmp.imag = (a.imag * b_1.real + a.real * b_1.imag) / mauSo;
    return tmp;
}
// Nguyen Huu Hau 20215573

// da nang hoa toan tu <<
ostream &operator << (ostream &out, const Complex &a)
{
    out << '(' << setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main()
{
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;

    Complex a{real_a, img_a};
    Complex b{real_b, img_b};

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    return 0;
}
// Nguyen Huu Hau 20215573