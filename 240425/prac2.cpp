// ��ó���⿡�� �۵���.
// �ҽ��ڵ� ������ ����Ǵ� �͵�
#include <iostream>
#include <string>

#define ROW_SIZE 5
#define COL_SIZE 4

using namespace std;

int main()
{
	int age;
	int age_check = 0;

	string student_info[ROW_SIZE][COL_SIZE] =
	{
		{ "�̸�", "����", "����","����" },
		{ "������", "19" , "66" , "68" },
		{ "������", "20" , "73" , "94" },
		{ "�谡��", "19" , "58" , "37" },
		{ "������", "20" , "82" , "29" }
	};

	cout << "������ ã�� �л��� ���̸� �Է��Ͻÿ�. => " << endl;
	cin >> age;

	for (int i = 0; i < ROW_SIZE; i++) {
		if (student_info[i][1] == to_string(age)) {
			age_check++;
			cout << "ã�� �л��� �̸��� " << student_info[i][0] << ", ���� ������ " << student_info[i][3] << "�� �Դϴ�." << endl;
		}
	}
	if (age_check == 0) {
		cout << "�ش� ������ �л��� ����..;";
	}
	return 0;
}