#include "StringUtil.h"

int IndexOf(char* String, int Size, char FindCharacter)
{
	for (int i = 0; i < Size; ++i)
	{
		if (String[i] == FindCharacter)
		{
			return i;
		}
	}

	return -1;
}

void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter)
{
	for (int i = 0; i < Size; ++i)
	{
		if (String[i] == FindCharacter)
		{
			String[i] = ReplaceCharacter;
		}
	}
}


int Length(char* String, int Size)
{
	for (int i = 0; i < Size; ++i)
	{
		if (String[i] == 0)
		{
			return i;
		}
	}

	return Size;
}

void Allocate()
{
	for (;;)
	{
		new int;
		// new int 는 지금까지 사용해왔던 스택공간이 아니라 힙 영역에 공간을 만들어서 주소값을 줌
	}
}