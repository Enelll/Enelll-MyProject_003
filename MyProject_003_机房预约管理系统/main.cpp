#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		cout << "======================  ��ӭ��������ԤԼϵͳ  ====================="
			<< endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.ѧ������           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.��    ʦ           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          3.�� �� Ա           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.��    ��           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "��������ѡ��: ";
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 0://�˳�
			cout << "�˳�ϵͳ����ӭ�´�ʹ��!!!" << endl;
			system("pause");
			return 0;
			break;
		case 1://ѧ������

			break;
		case 2://��ʦ

			break;
		case 3://�� �� Ա

			break;

		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}
