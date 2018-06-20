	#include <stdio.h>

	int main(void)
	{
	    int no, tmp;

	    printf("正の整数：");
	    scanf("%d", &no);

	    tmp = no;

	    while(no-- > 0)
	            putchar('*');

	    if(tmp >= 1)
	    	putchar('\n');

	    return 0;
	}