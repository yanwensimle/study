#include<iostream>
using  namespace std;
//����Ȩ��
//public ����Ȩ�ޣ����ڿ��Է��ʣ�����Ҳ���Է���
//protected ����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ���Է���
//private ˽��Ȩ�ޣ����ڿ��Է��ʣ����ⲻ���Է���
class Person
{
	//���е����Ժ���Ϊͳ��Ϊ��Ա
	// ���ԣ���Ա����   ��Ա����
	// ��Ϊ����Ա����   ��Ա����
	//����Ȩ��
	//����Ȩ��
public:
	//���еı���������Ա������Ҳ�г�Ա����
	string m_name;
protected:
	string m_car;
private:
	int m_password;
};

int main()
{
	Person s1;
	s1.m_name = "����";
	//s1.m_car = "����";//����Ȩ���ⲿ�����Է���
	//s1.m_password = 1234;//˽��Ȩ���ⲿ�����Է���
	system("pause");
	return 0;
}