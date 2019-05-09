#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;
#include<sstream>
#include<string>
class Complex
{
private:
int a,b;
public:
Complex();
Complex(int,int);
Complex add(const Complex&)const;
Complex subtract(const Complex&)const;
Complex multiply(const Complex&)const;
string toString()const;
friend ostream&operator<<(ostream&,const Complex&);
friend istream&operator>>(istream&,Complex&);
int&operator[](int);
Complex&operator+=(const Complex&);
Complex&operator-=(const Complex&);
Complex&operator*=(const Complex&);
Complex&operator++();
Complex&operator--();
Complex operator++(int);
Complex operator--(int);
Complex operator+();
Complex operator-();
};
Complex operator+(const Complex&,const Complex&);
Complex operator-(const Complex&,const Complex&);
Complex operator*(const Complex&,const Complex&);
#endif
