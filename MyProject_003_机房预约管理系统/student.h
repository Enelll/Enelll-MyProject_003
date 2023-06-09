#pragma once
#include "Identity.h"
#include <iostream>

using namespace std;

class Student : public Identity
{
public:
	//默认构造
	Student();

	//有参构造
	Student(int id,string name,string pwd);

	//菜单界面
	virtual void operMenu();


	//申请预约
	void appluOrder();

	//查看自身预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void canceOrder();

	//学号
	int m_Id;
};
