#include <iostream>
#include "StringUtil.h"

using namespace std;

int main()
{
	// 숫자 입력 받아서 그걸 크기로 숫자 배열을 만들어서
	// 1부터 크기까지 초기화 하고 출력하는 프로그램을 만들어 보세요

	int Size = 0;
	cin >> Size;

	int* CountPrint = new int[Size];

	for (int i = 0; i < Size; i++)
	{
		CountPrint[i] = i + 1;
		cout << CountPrint[i] << endl;
	}

	return 0;
}