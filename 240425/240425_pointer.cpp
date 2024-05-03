
#include <iostream>
#include <string>

using namespace std;

/*
int main()
{
	// 2차원 배열
	int array[3][5] = { 0 };

	int array[3][5] =
	{
		{ 1, 2 } , // row 0 = 1, 2, 0, 0, 0
		{ 6, 7, 8 }, // row 1 = 6, 7, 8, 0, 0
		{ 11, 12, 13, 14 } // row 2 = 11, 12, 13, 14 ;
	};

	// 형 변환 (정수->문자열)
	int num = 0;
	string snum = to_string(num);
	

	int main(){
	// 포인터 : C++의 강점, 중요해서 대체 안됨
	int n = 20;
	int* p = &n;
	cout << p << endl; // 주소값 : 000000B7230FF8A4
	cout << *p << endl; // 값 : 20

}
*/
	// 배열도 포인터로 작동
	// 배열의 주소값은 순차적으로 적용되어 있음.
	int main() {
		int my_array[5] = { 5,4,3,2,1 };
		int* p = my_array;

		cout << "Value1: " << *p << endl; //5
		p++;
		cout << "Value2: " << *p << endl; //4
		p++;
		cout << "Value3: " << *p << endl; //3
		return 0;
	}
	
	// call by value : 주소값을 불러옴.
	void changeValue(int x) {
		x = 20;
	}

	int main() {
		int x = 10;
		cout << " x before function call : " << x << endl;
		changeValue(x);
		cout << " x after function call : " << x << endl;

	}

	// call by reference : 값을 불러옴. 
	void changeValue(int *x) {
		*x = 20;
	}

	int main() {
		int x = 10;
		cout << " x before function call : " << x << endl;
		changeValue(&x);
		cout << " x after function call : " << x << endl;

	}