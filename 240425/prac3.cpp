#include <iostream>
#include <string>

#define Size 5

using namespace std;

// �迭�� ����� ���
void reverse_print(string *arr) {
	
	for (int i = 0; i < Size; i++) {
		cout << arr[Size - i - 1] << " ";
	}
}

// �迭 �� ��ä�� ���
void origin_print(string *arr) {

	for (int i = 0; i < Size; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	
	string korean[Size] = { "��", "��", "��", "��", "��" };
	
	cout << " korean before function call : ";
	
	origin_print(korean);

	cout << endl << " korean after function call : ";
	
	reverse_print(korean);
	
}