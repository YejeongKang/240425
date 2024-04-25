#include <iostream>
#include <string>

using namespace std;

int main() {

	int st_num;
	int sc;
	int sum_sc = 0;

	// 학생 수 입력받기
	cout << "평균을 낼 학생 수를 입력하시오 : ";
	cin >> st_num;
	
	// 동적 배열 선언
	int* score = new int[st_num];

	// 성적 입력받고 동적 배열에 값 대입, 동시에 합 계산
	for (int i = 0; i < st_num; i++) {

		cout << i + 1 << "번 학생의 성적을 입력하시오 : ";
		cin >> sc;

		*(score + i) = sc; // == score[i] = sc;
		sum_sc += sc;
	}
	// 평균 출력
	cout << "성적 평균 : " << (sum_sc / st_num);
	
	// 동적 배열 해제
	delete[] score; 
}
