// 전처리기에서 작동됨.
// 소스코드 이전에 실행되는 것들
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
		{ "이름", "나이", "국어","수학" },
		{ "방지턱", "19" , "66" , "68" },
		{ "정직한", "20" , "73" , "94" },
		{ "김가루", "19" , "58" , "37" },
		{ "조나단", "20" , "82" , "29" }
	};

	cout << "점수를 찾는 학생의 나이를 입력하시오. => " << endl;
	cin >> age;

	for (int i = 0; i < ROW_SIZE; i++) {
		if (student_info[i][1] == to_string(age)) {
			age_check++;
			cout << "찾는 학생의 이름은 " << student_info[i][0] << ", 수학 점수는 " << student_info[i][3] << "점 입니다." << endl;
		}
	}
	if (age_check == 0) {
		cout << "해당 나이의 학생은 없숭..;";
	}
	return 0;
}