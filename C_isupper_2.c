#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'a';
	if(isupper(a)==0)
	{
		printf("�ҹ����Դϴ�.\n");
	}
	else
	{
		printf("�빮���Դϴ�.\n");
	}
	
	return 0;

}