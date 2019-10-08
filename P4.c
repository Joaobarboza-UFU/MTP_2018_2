/* P4.c */
/* João Barboza Rodrigues */
/* 11811ECP005 */


#include <stdio.h>

int x(int, int);
int main ()
{	int w, k;
	scanf("%d", &w);
	getchar();
	scanf("%d", &k);
	getchar();
	printf("%d", x(w, k));
	return 0;}
int x(int w, int k)
{	if (w == 0)
	return k+1;
	else if (w>0 && k==0)
	return x(w-1, 1);
	else if (w>0 && k>0)
	return x(w-1, x(w, k-1));}
