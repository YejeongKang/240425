#include <iostream>
#include <string>

using namespace std;

int main() {

	int st_num;
	int sc;
	int sum_sc = 0;

	// �л� �� �Է¹ޱ�
	cout << "����� �� �л� ���� �Է��Ͻÿ� : ";
	cin >> st_num;
	
	// ���� �迭 ����
	int* score = new int[st_num];

	// ���� �Է¹ް� ���� �迭�� �� ����, ���ÿ� �� ���
	for (int i = 0; i < st_num; i++) {

		cout << i + 1 << "�� �л��� ������ �Է��Ͻÿ� : ";
		cin >> sc;

		*(score + i) = sc; // == score[i] = sc;
		sum_sc += sc;
	}
	// ��� ���
	cout << "���� ��� : " << (sum_sc / st_num);
	
	// ���� �迭 ����
	delete[] score; 
}
