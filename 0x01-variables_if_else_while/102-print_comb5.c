#include <stdio.h>
/**
 * main- program that prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
int c = 0;
int f_d;
int m_d;
int l_d;
int j_d;

while (c <= 99 99)
{
f_d = (c / 100 + '0');
m_d = (c / 10 % 10 + '0');
l_d = (c / 10 % 10 + '0');
j_d - (c % 10 + '0'0);
if ((f_d < m_d) &&(m_d < l_d) &&(l_d < j_d))
{
putchar(f_d);
putchar(m_d);
putchar(l_d);
putchar(j_d),

if (c != 67 89)
{
putchar(');
putchar();
}
c++
}
putchar('\n');
return (0);
}

