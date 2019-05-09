#include"Complex.h"
int main()
{
Complex first=Complex(3,4)+Complex(2,-4)*Complex(3,-1),second=Complex(4,3)-Complex(5,6);
cout<<"first="<<first<<"second="<<second;
cout<<"++first="<<++first<<"--second="<<--second;
}
