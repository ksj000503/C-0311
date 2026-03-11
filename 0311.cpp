//#include <iostream>
//
//using namespace std;
//
//int Length(char* String, int Size)
//{
//	for (int i = 0; i < Size; i++)
//	{
//		if (String[i] == 0)
//		{
//			return i;
//		}
//	}
//}
//void Count(char* String, int size)
//{
//	int Sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (String[i] == 0)
//		{
//			break;
//		}
//		Sum++;
//
//	}
//	cout << Sum << endl;
//	return;
//}
//
//void Change(char* String)
//{
//	char One;
//	char Two;
//
//	cout << "찾는 문자 : ";
//	cin >> One;
//	cout << "바뀔 문자 : ";
//	cin >> Two;
//
//
//	for (int i = 0; ; i++)
//	{
//		if (String[i] == One)
//		{
//			String[i] = Two;
//			break;
//		}
//		String[i];
//	}
//	cout << "최종 : " << String << endl;
//	return;
//}
//
//void Find(char* String)
//{
//	char Num;
//	cout << "찾을 문자 : ";
//	cin >> Num;
//	int Sum = 0;
//	for (int i = 0; ; i++)
//	{
//		if (String[i] == Num)
//		{
//			cout << Sum + 1 << "번째" << endl;
//			break;
//		}
//		String[i];
//		Sum++;
//	}
//	return;
//}
//int main()
//{
//	
//	char String[100];
//	cout << "문자열 :";
//	cin >> String;
//	int StringLength = Length(String, 100);
//	
//	
//	// 문자열 갯수 세기
//	cout << "문자열 갯수 세기" << endl;
//	Count(String, StringLength);
//	
//
//	// 문자열 중에서 특정 문자를 특정문 바꾸기
//	cout << "문자열 중에서 특정 문자를 특정문 바꾸기" << endl;
//	Change(String);
//	
//	// 문자열 중에서 특정 문자 위치 찾기
//	cout << "문자열 중에서 특정 문자 위치 찾기" << endl;
//	Find(String);
//
//	return 0;
//}