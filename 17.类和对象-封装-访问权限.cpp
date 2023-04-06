#include<iostream>
using  namespace std;
//访问权限
//public 公共权限，类内可以访问，类外也可以访问
//protected 保护权限，类内可以访问，类外不可以访问
//private 私有权限，类内可以访问，类外不可以访问
class Person
{
	//类中的属性和行为统称为成员
	// 属性：成员变量   成员属性
	// 行为：成员函数   成员方法
	//访问权限
	//公共权限
public:
	//类中的变量叫做成员变量，也叫成员属性
	string m_name;
protected:
	string m_car;
private:
	int m_password;
};

int main()
{
	Person s1;
	s1.m_name = "张三";
	//s1.m_car = "奔驰";//保护权限外部不可以访问
	//s1.m_password = 1234;//私有权限外部不可以访问
	system("pause");
	return 0;
}