#include <iostream>
#include "StringUtil.h"

using namespace std;

int main()
{
	// 숫자 입력 받아서 그걸 크기로 숫자 배열을 만들어서
	// 1부터 크기까지 초기화 하고 출력하는 프로그램을 만들어 보세요

	int Size = 0;
	cin >> Size;
	int *CountPrint = nullptr;
	CountPrint = new int[Size];

	if (!CountPrint) // CountPrint == nullptr, CountPrint == 0
	{
		return -1;
	}

	for (int i = 0; i < Size; i++)
	{
		CountPrint[i] = i + 1; // 초기화
		cout << CountPrint[i] << " ";
	}
	cout << endl;
	
	// heap에 있는 배열을 반환해주세요.
	delete[] CountPrint;
	CountPrint = nullptr;

	return 0;
}