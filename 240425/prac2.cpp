// ��ó���⿡�� �۵���.
// �ҽ��ڵ� ������ ����Ǵ� �͵�
#include <iostream>
#include <string>

#define ROW_SIZE 5
#define COL_SIZE 4

using namespace std;

int main()
{
	int age = 0;
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

	for (int i = 1; i < ROW_SIZE; i++) {
		// student_info[i][0] : �̸�
		// student_info[i][1] : ����
		// student_info[i][3] : ���� ����
		// ���� Ž��
		if (student_info[i][1] == to_string(age)) //to_string ���ְ� age ������ �� string���� ���൵ ��. �Է°��� ��Ʈ������ �޾���.
		{
			age_check++;
			cout << "ã�� �л��� �̸��� " << student_info[i][0] << ", ���� ������ " << student_info[i][3] << "�� �Դϴ�." << endl;
		}
	}
	// age�� �ش��ϴ� ������ �л��� �ִ��� Ȯ��. 
	if (age_check == 0) {
		cout << "�ش� ������ �л��� ����..;";
	}
	return 0;
}

// Chat GPT �ڵ�
/* #include <iostream>
#include <string>
#include <vector>

#define ROW_SIZE 5
#define COL_SIZE 4

using namespace std;

struct Student {
    string name;
    int age;
    int korean;
    int math;
};

int main() {
    int age;
    int age_check = 0;

    // Array of student information
    Student students[ROW_SIZE] = {
        {"�̸�", 0, 0, 0},
        {"������", 19, 66, 68},
        {"������", 20, 73, 94},
        {"�谡��", 19, 58, 37},
        {"������", 20, 82, 29}
    };

    cout << "������ ã�� �л��� ���̸� �Է��Ͻÿ�. => ";
    cin >> age;

    for (int i = 1; i < ROW_SIZE; i++) { // Start from index 1 to skip header row
        if (students[i].age == age) {
            age_check++;
            cout << "ã�� �л��� �̸��� " << students[i].name << ", ���� ������ " << students[i].math << "�� �Դϴ�." << endl;
        }
    }

    // Check if any student with the given age exists
    if (age_check == 0) {
        cout << "�ش� ������ �л��� �����ϴ�." << endl;
    }

    return 0;
}*/