#pragma once
#include "Identity.h"
#include <iostream>

using namespace std;

class Student : public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι���
	Student(int id,string name,string pwd);

	//�˵�����
	virtual void operMenu();


	//����ԤԼ
	void appluOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void canceOrder();

	//ѧ��
	int m_Id;
};
