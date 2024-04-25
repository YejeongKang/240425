// 전처리기에서 작동됨.
// 소스코드 이전에 실행되는 것들
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
		{ "이름", "나이", "국어","수학" },
		{ "방지턱", "19" , "66" , "68" },
		{ "정직한", "20" , "73" , "94" },
		{ "김가루", "19" , "58" , "37" },
		{ "조나단", "20" , "82" , "29" }
	};

	cout << "점수를 찾는 학생의 나이를 입력하시오. => " << endl;
	cin >> age;

	for (int i = 1; i < ROW_SIZE; i++) {
		// student_info[i][0] : 이름
		// student_info[i][1] : 나이
		// student_info[i][3] : 수학 점수
		// 나이 탐색
		if (student_info[i][1] == to_string(age)) //to_string 없애고 age 선언할 때 string으로 해줘도 됨. 입력값이 스트링으로 받아짐.
		{
			age_check++;
			cout << "찾는 학생의 이름은 " << student_info[i][0] << ", 수학 점수는 " << student_info[i][3] << "점 입니다." << endl;
		}
	}
	// age에 해당하는 나이의 학생이 있는지 확인. 
	if (age_check == 0) {
		cout << "해당 나이의 학생은 없숭..;";
	}
	return 0;
}

// Chat GPT 코드
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
        {"이름", 0, 0, 0},
        {"방지턱", 19, 66, 68},
        {"정직한", 20, 73, 94},
        {"김가루", 19, 58, 37},
        {"조나단", 20, 82, 29}
    };

    cout << "점수를 찾는 학생의 나이를 입력하시오. => ";
    cin >> age;

    for (int i = 1; i < ROW_SIZE; i++) { // Start from index 1 to skip header row
        if (students[i].age == age) {
            age_check++;
            cout << "찾는 학생의 이름은 " << students[i].name << ", 수학 점수는 " << students[i].math << "점 입니다." << endl;
        }
    }

    // Check if any student with the given age exists
    if (age_check == 0) {
        cout << "해당 나이의 학생은 없습니다." << endl;
    }

    return 0;
}*/