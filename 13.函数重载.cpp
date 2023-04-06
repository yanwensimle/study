//#include<iostream>
//using  namespace std;
////函数重载
////函数重载的满足条件
////1.在同一作用域下
////2.函数名称相同
////3.函数参数类型不同，或者参数个不同，或者顺序不同
//void func()
//{
//	cout << "输出这个函数" << endl;
//}
//void func(int a)
//{
//	cout << "输出这个函数！" << endl;
//}
//void func(double a)
//{
//	cout << "输出这个函数！!" << endl;
//}
//void func(int a,double b)
//{
//	cout << "输出这个函数！!" << endl;
//}
////函数的返回值类型，不可作为函数重载的条件
////int func(int a, double b)
////{
////	cout << "输出这个函数！!" << endl;
////}
//int main()
//{
//	//因为在定义函数的时候，参数列表第二位出现了一个整型的函数占用，所以在调用函数的时候需要填入一个整型数字
//	func();
//	func(2);
//	func(2.0);
//	func(2,3.9);
//	system("pause");
//	return 0;
//}