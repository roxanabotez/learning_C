#include <stdio.h>
#include <limits.h>
void main()
{
int a1;
char a2;
printf("Introduce an integer value:  \n");
scanf ("%d",&a1);
printf("The length of integer is: %d\n", sizeof(int));
printf("Value is:%d\n",a1);

printf("Introduce a character from keyboard:\n");
scanf("%c", &a2);
printf("Length of a char is: %c\n", sizeof(char));
printf("Value of character is: %c",a2);

}
