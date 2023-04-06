//#include<iostream>
//using  namespace std;
////函数重载
////引用作为函数重载的条件
////函数接受一个变量
//void func(int &a)
//{
//	cout << "输出这个函数" << endl;
//}
////函数接受一个常量
//void func(const int &a)
//{
//	cout << "输出这个函数！!" << endl;
//}
////函数重载碰到默认参数
//void func2(int a, int b=10)
//{
//	cout << "输出这个函数！!" << endl;
//}
//void func2(int a)
//{
//	cout << "输出这个函数！!!" << endl;
//}
//int main()
//{
//	int a = 10;
//	func(a);
//	func(10);
//	//func2(10);//函数重载碰到默认参数的时候可能会出现二义性，所以使用函数重载的时候，尽量不要使用默认参数
//	system("pause");
//	return 0;
//}