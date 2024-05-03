#include <iostream>
#include <string>

#define ARRAY_SIZE 5

using namespace std;

// 배열 그 잡채를 출력
void print_array(string *arr) {

	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << *(arr + i) << " ";
	}
}

// 배열을 뒤집기
void reverse(string* arr) {

	for (int i = 0; i < ARRAY_SIZE / 2; i++) {

		string temp = *(arr + i);
		*(arr + i) = *(arr + ARRAY_SIZE - i - 1);
		*(arr + ARRAY_SIZE - i - 1) = temp;

	}
}

int main() {
	
	string korean[ARRAY_SIZE] = { "가", "나", "다", "라", "마" };
	
	cout << " korean before function call : ";
	
	print_array(korean);

	cout << endl << " korean after function call : ";
	
	reverse(korean);

	print_array(korean);
	
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