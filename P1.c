/* P1.c */
/* João Barboza Rodrigues */
/* 11811ECP005 */

#include <stdio.h>

int main (){
	char b[256];
	int x = 0, i;
	scanf("%s", b);
	for(i = 0; b[i] != '\0'; i++)
    {
    	if(x == 0 && b[i] == '0')
    	    x = 0;
    	    else
		if(x == 0 && b[i] == '1')
    		x = 1;
    		else
		if(x == 1 && b[i] == '1')
	    	x = 0;
	    	else
		if(x == 1 && b[i] == '0')
		    x = 2;
		    else
		if(x == 2 && b[i] == '1')
			x = 2;
			else
		if(x == 2 && b[i] == '0')
			x = 1;
	 }	
	 
	if(x == 0)
	printf("%s eh multiplo de 3", b);
	else
	printf("%s nao eh multiplo de 3", b);
	return 0;
}
