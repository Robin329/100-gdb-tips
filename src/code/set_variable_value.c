#include <stdio.h>
int func(void)
{
int i = 2;
return i;
}
int main(void)
{
int a = 0;
a = func();
printf("%d\n", a);
return 0;
}
