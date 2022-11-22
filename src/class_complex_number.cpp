#include"complex.h"


Complex::Complex(double number, double i_number)
        : number(number)
        , inumber(i_number){}

void Complex::operator=(const Complex &fake)
{
        this->number = fake.number;
        this->inumber = fake.inumber;
}

Complex Complex::operator+(const Complex &fake)
{
    return Complex(this->number+fake.number,this->inumber+fake.inumber);
}

Complex Complex::operator-(const Complex &fake)
{
    return Complex(this->number - fake.number,this->inumber - fake.inumber);
}

Complex Complex::operator++()
{
    return Complex(this->number = this->number + 1,this->inumber = this->inumber + 1);
}

Complex Complex::operator++(int)
{
    return Complex(this->number++, this->inumber++);
}

Complex Complex::operator--(int)
{
    return Complex(this->number--, this->inumber--);
}
Complex Complex::operator--()
{
    return Complex(this->number = this->number - 1, this->inumber = this->inumber - 1);
}

Complex Complex::operator+=(const Complex &fake)
{
    return Complex(this->number = fake.number + this->number,this->inumber = fake.inumber + this->inumber);
}

bool Complex::operator==(const Complex &fake)
{
    return (this->number == fake.number && this->inumber == fake.inumber);
}

void Complex::show()
{
    std::cout << number << "  " << inumber << std::endl;
}
