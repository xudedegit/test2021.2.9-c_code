#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define YES 1
#define NO 0
//利用秦九韶的方法进行十六进制转换成十进制  
int htoi(char s[])
{
	int hexdigit, i, index, n;
	i = 0;
	if (s[i] == '0')
	{
		++i;
		if (s[i] == 'x'||s[i]== 'X')
		{
			++i;
		}
	}
	n = 0;
	index = YES;
	for (; index == YES; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			hexdigit = s[i] - '0';
		}
		else if (s[i] >= 'a' && s[i] <= 'f')
		{
			hexdigit = s[i] - 'a' + 10;
		}
		else if (s[i] >= 'A' && s[i] <= 'F')
		{
			hexdigit = s[i] - 'A' + 10;
		}
		else
		{
			index = NO;
		}
		if (index == YES)
		{
			n = n * 16 + hexdigit;
		}
		
	}
	return n;
}
int main()
{
	int ret;
	ret=htoi("0xC8D7");
	printf("%d\n", ret);
	/*char num[10] = { '0','1','2','3','4','5','6','7','8','9' };
	char word[6] = { 'a','b','c','d','e','f'};
	char Word[6] = { 'A','B','C','D','E','F' };*/

	return 0;

}