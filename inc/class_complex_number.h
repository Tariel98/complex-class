#ifndef __CLASS_COMPLEX_NUMBER_H__
#define __CLASS_COMPLEX_NUMBER_H__

class Complex
{
    private:
    double number;
    double inumber;

    public:
    Complex(double, double);
    void operator= (const Complex& fake);
    Complex operator+ (const Complex& fake);
    Complex operator- (const Complex& fake);
    Complex operator++ ();
    Complex operator++ (int);
    Complex operator-- ();
    Complex operator-- (int);
    Complex operator+= (const Complex& fake);
    bool operator== (const Complex& fake);
    void display();
};

#endif
