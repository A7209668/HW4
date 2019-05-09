#include"Complex.h"
Complex::Complex()
{
}
Complex::Complex(int a,int b)
{
this->a=a,this->b=b;
}
Complex Complex::add(const Complex&p)const
{
return Complex(a+p.a,b+p.b);
}
Complex Complex::subtract(const Complex&p)const
{
return Complex(a-p.a,b-p.b);
}
Complex Complex::multiply(const Complex&p)const
{
return Complex(a*p.a-b*p.b,a*p.b+b*p.a);
}
string Complex::toString()const
{
stringstream ss;
ss<<a<<b<<"i"<<endl;
return ss.str();
}
Complex operator+(const Complex&p,const Complex&pp)
{
return p.add(pp);
}
Complex operator-(const Complex&p,const Complex&pp)
{
return p.subtract(pp);
}
Complex operator*(const Complex&p,const Complex&pp)
{
return p.multiply(pp);
}
ostream&operator<<(ostream&out,const Complex&p)
{
out<<p.toString();
return out;
}
istream&operator>>(istream&in,Complex&p)
{
in>>p.a>>p.b;
return in;
}
int&Complex::operator[](int i)
{
if(i==0)
return a;
if(i==1)
return b;
}
Complex&Complex::operator+=(const Complex&p)
{
*this=add(p);
return*this;
}
Complex&Complex::operator-=(const Complex&p)
{
*this=subtract(p);
return*this;
}
Complex&Complex::operator*=(const Complex&p)
{
*this=multiply(p);
return*this;
}
Complex&Complex::operator++()
{
a+=1;
return*this;
}
Complex&Complex::operator--()
{
a-=1;
return*this;
}
Complex Complex::operator++(int)
{
a+=1;
return Complex(a,b);
}
Complex Complex::operator--(int)
{
a-=1;
return Complex(a,b);
}
Complex Complex::operator+()
{
return*this;
}
Complex Complex::operator-()
{
return Complex(-a,-b);
}
