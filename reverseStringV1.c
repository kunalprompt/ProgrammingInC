// gcc reverseStringV1.c -o  reverseStringV1.out
// ./reverseStringV1.out
// size reverseStringV1.out

#include <stdio.h>

void reverseString(char *str){
	if (*str=='\0')
		return;
	else{
		reverseString(str+1);
		printf("%c", *str);
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	char *str = "hello india!";
	reverseString(str);
	printf("\n");
	return 0;
}