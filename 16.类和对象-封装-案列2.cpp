//#include<iostream>
//using  namespace std;
////设计一个学生类，属性有姓名、学号，可以对其进行赋值，可以显示学生的姓名和学号
//class Student
//{
//	//类中的属性和行为统称为成员
//	// 属性：成员变量   成员属性
//	// 行为：成员函数   成员方法
//	//访问权限
//	//公共权限
//public:
//	//类中的变量叫做成员变量，也叫成员属性
//	string s_name;
//	int s_id;
//	//通过构造方法为函数属性赋值
//	void setinfo(string name,int id)
//	{
//		s_name = name;
//		s_id = id;
//	}
//	//类中的函数叫做成员函数，也叫成员方法
//	//输出学生信息
//	void output_info()
//	{
//		cout << "学生的姓名：" << s_name << endl;
//		cout << "学生的学号：" << s_id << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.setinfo("张三",796);
//	s1.output_info();
//	system("pause");
//	return 0;
//}