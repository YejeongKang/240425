#include <iostream>
#include <string>

#define Size 5

using namespace std;

// 배열을 뒤집어서 출력
void reverse_print(string *arr) {
	
	for (int i = 0; i < Size; i++) {
		cout << arr[Size - i - 1] << " ";
	}
}

// 배열 그 잡채를 출력
void origin_print(string *arr) {

	for (int i = 0; i < Size; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	
	string korean[Size] = { "가", "나", "다", "라", "마" };
	
	cout << " korean before function call : ";
	
	origin_print(korean);

	cout << endl << " korean after function call : ";
	
	reverse_print(korean);
	
}