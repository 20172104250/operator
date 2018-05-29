// operetor.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue (int f, int i);
	void display();
	CFeet minut(CFeet & ojb);
	CFeet operator -(CFeet & ojb);
	CFeet add(CFeet & ojb);
	CFeet operator +(CFeet & ojb);

};
void CFeet::setvalue(int f, int i)
{
	inches = f * 12 + i;
	feet = inches / 12;
	inches = inches - 12.0*(int)(inches / 12);
}
void CFeet:: display()
{
	cout << feet << "英尺" << inches << "英寸" << endl;
}
CFeet CFeet::minut(CFeet&ojb)
{
	CFeet temp;
	temp.setvalue(feet - ojb.feet, inches - ojb.inches);
	return temp;
}
CFeet CFeet::add(CFeet&ojb)
{
	CFeet temp;
	temp.setvalue(feet + ojb.feet, inches + ojb.inches);
	return temp;
}
CFeet CFeet::operator-(CFeet & ojb)
{
	CFeet temp;
	temp.setvalue(feet - ojb.feet, inches - ojb.inches);
	return temp;
}
CFeet CFeet::operator+(CFeet & ojb)
{
	CFeet temp;
	temp.setvalue(feet + ojb.feet, inches + ojb.inches);
	return temp;
}

int main()
{
	CFeet A, B, C;
	A.setvalue(1,1);
	B.setvalue(2,2);
	C = A - B;
	C.display();
    return 0;
}

