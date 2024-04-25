#include <iostream>
#include <string>

#define Size 5

using namespace std;

// 배열을 뒤집기
void reverse(string *arr) {
	
	for (int i = 0; i < Size / 2; i++) {
		
		string temp = *(arr + i);
		*(arr + i)= *(arr + Size - i - 1);
		* (arr + Size - i - 1) = temp;

	}
}

// 배열 그 잡채를 출력
void origin_print(string *arr) {

	for (int i = 0; i < Size; i++) {
		cout << *(arr + i) << " ";
	}
}

int main() {
	
	string korean[Size] = { "가", "나", "다", "라", "마" };
	
	cout << " korean before function call : ";
	
	origin_print(korean);

	cout << endl << " korean after function call : ";
	
	reverse(korean);

	for (int i = 0; i < Size; i++) {

		cout << *(korean + i) << " ";
	}
	
}
/*
void reverse(string *array) {

	for (int i = 0; i < Size / 2; i++) 
	{
		string temp = array[i];
		array[i] = array[5 - i - 1];
		array[5 - i - 1] = temp;
	}
}
*/