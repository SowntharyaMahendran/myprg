#include<stdio.h>
int main()
{
int a;
printf("enter the character: ");
scanf("%d",&a);
if(a>='a'&&a<='z')||(a>='A'&&a<='Z')
{
printf("given character is alphabet");
else 
printf("given character is not alphabet");
}
return 0;
}
