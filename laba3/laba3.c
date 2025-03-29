#include <stdio.h>
#include <string.h>

/* 
ЗАДАНИЕ 3
Ввести с консоли строку символов произвольной длины (до 80 символов). По-менять в ней все маленькие символы 'a' и 'b' на заглавные и вывести на консоль полученную строку.
*/

int main()
{
	int i=0;
	char n[81];
	printf("enter a string \n");
	fgets(n, 81, stdin);
	while (i<strlen(n))
	{
		if (n[i]=='a' | n[i]=='b')
		{
			n[i]= (toupper (n[i]));
		}
		i=i+1;
		
	}
	printf("%s",n);
	return 0;
}
