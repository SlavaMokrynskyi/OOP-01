#include <iostream>

using namespace std;

class Fraction
{
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    Fraction() : Fraction(1, 1) {}
    void Multiply(Fraction fract1, Fraction fract2)
    {
        this->numerator = fract1.numerator * fract1.numerator;
        this->denominator = fract1.denominator * fract2.denominator;
    }
    void Divide(Fraction fract1, Fraction fract2)
    {
        this->numerator = fract1.numerator * fract2.denominator;
        this->denominator = fract1.denominator * fract2.numerator;
    }
    void Plus(Fraction fract1, Fraction fract2)
    {
        if (fract1.denominator != fract2.denominator)
        {
            this->denominator = fract1.denominator * fract2.denominator;
            this->numerator = fract1.numerator * fract2.denominator + fract2.numerator * fract1.denominator;
        }
        else
        {
            this->denominator = fract1.denominator;
            this->numerator = fract1.numerator + fract2.numerator;
        }
    }
    void Minus(Fraction fract1, Fraction fract2)
    {
        if (fract1.denominator != fract2.denominator)
        {
            this->denominator = fract1.denominator * fract2.denominator;
            this->numerator = fract1.numerator * fract2.denominator - fract2.numerator * fract1.denominator;
        }
        else
        {
            this->denominator = fract1.denominator;
            this->numerator = fract1.numerator - fract2.numerator;
        }
    }
    void Show()
    {
        cout << numerator << "/" << denominator << "\n";
    }
};
int main()
{
    
}