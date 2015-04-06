#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *str = "http://kunalprompt.github.io";
	char *ch=str;
	int len=0;
	while(*ch!='\0'){
		printf("%c", *ch);
		len++;
		ch++;
	}
	printf("\n%d\n", len);
	return 0;
}