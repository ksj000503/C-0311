#include < iostream>

using namespace std;

void Count(char* Array)
{
	int Sum = 0;
	for (int i = 0; ; i++)
	{
		if (Array[i] == '\0')
		{
			break;
		}
		Sum++;

	}
	cout << Sum << endl;
}

void Change(char* Array)
{
	char One;
	char Two;

	cout << "찾는 문자 : ";
	cin >> One;
	cout << "바뀔 문자 : ";
	cin >> Two;


	for (int i = 0; ; i++)
	{
		if (Array[i] == One)
		{
			Array[i] = Two;
			break;
		}
		Array[i];
	}
	cout << "최종 : " << Array << endl;
}

void Find(char* Array)
{
	char Num;
	cout << "찾을 문자 : ";
	cin >> Num;
	int Sum = 0;
	for (int i = 0; ; i++)
	{
		if (Array[i] == Num)
		{
			cout << Sum << "번째" << endl;
			break;
		}
		Array[i];
		Sum++;
	}
}
int main()
{
	
	char Array[100];
	cout << "문자열 :";
	cin >> Array;
	
	// 문자열 갯수 세기
	cout << "문자열 갯수 세기" << endl;
	Count(Array);
	

	// 문자열 중에서 특정 문자를 특정문 바꾸기
	cout << "문자열 중에서 특정 문자를 특정문 바꾸기" << endl;
	Change(Array);
	
	// 문자열 중에서 특정 문자 위치 찾기
	cout << "문자열 중에서 특정 문자 위치 찾기" << endl;
	Find(Array);

	return 0;
}