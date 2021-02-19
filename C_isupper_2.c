#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'a'; // 초기화
	if(isupper(a)==0)
	{
		printf("소문자입니다.\n");
	}
	else
	{
		printf("대문자입니다.\n");
	} // 대문자인지 소문자인지 확인하여 출력하기
	
	return 0;

}
