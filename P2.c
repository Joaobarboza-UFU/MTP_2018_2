/* P2.c */
/* João Barboza Rodrigues */
/* 11811ECP005 */

#include <stdio.h>

void octdec(int oct[], int num)
{
	int x, y, i, dec=0, aux;
	x=num-1;
	for(i=0; i<num; i++)
	{
		aux=1;
		y=x;
		if(y==0)
			aux;
		else	
			while(y>0)
			{
				aux=aux*8;
				y--;
			}
		dec = dec + oct[i]*aux;
		x--;
	}
	printf("\nO numero digitado em decimal: %d", dec);
}
void printar(int num) 
{
	int i, n=0, bits[256];
	if(num==0)
		printf("\nNumero em binario: 0");
	else
	{
		for(i=0; num/2!=0; i++)
		{
			bits[i] = num%2;
			num=num/2;
			n++;
		}
		printf("\nNumero em binario: 1");
		for(i=n-1; i>=0; i--)
			printf("%d", bits[i]);
	}
}
int main()
{
	int d, i, oct[1000], dec, hex, x;
	char bits[256];
	printf("Escolha uma opcao:\n\n 1 - Binario para Decimal.\n 2 - Binario para Hexadecimal.");
	printf("\n 3 - Hexadecimal para Decimal.\n 4 - Hexadecimal Para Binario.");
	printf("\n 5 - Decimal para Binario.\n 6 - Decimal para Hexadecimal.");
	printf("\n 7 - Octal para Decimal.\n 8 - Decimal para Octal.\n");
	scanf("%d", &d);
	getchar();
	if (d == 1)
		{
			printf("binario: ");
			scanf ("%s", bits);
			getchar();
			for(i=0, dec=0; bits[i]; i++) 
			{
				dec = dec*2 + (bits[i] - '0');
			}
			printf ("\n%d", dec);
		}
		else if (d == 2)
		{														
			printf("binario: ");
			scanf ("%s", bits);
			getchar();
			for(i=0, dec=0; bits[i]; i++) 
			{
				dec = dec*2 + (bits[i] - '0');
			}
			printf ("\n %x", dec);
		}
		else if ( d == 3)				
		{										
			printf("hexadecimal: ");
			scanf("%x", &hex);
			getchar();
			printf ("\n %d", hex);
	    }
		else if ( d == 4 )
		{												
			printf("hexadecimal: ");
			scanf("%x", &hex);
			getchar();
			printf ("\nNumero auxiliar: %d", hex);
			printf ("\n\nDigite o numero acima: ");
			scanf ("%d", &dec);
			getchar();
			printar(dec);
		}
		else if (d == 5)
		{														
			printf("decimal: ");
			scanf("%d", &dec);
			getchar();
			printar(dec);
		}
		else if(d == 6)
		{														
			printf("decimal: ");
			scanf("%d", &dec);
			getchar();
			printf("\n %x", dec);
		}
		else if(d == 7)
		{														
			printf("numero de algarismos para o octal: ");
			scanf("%d", &x);
			getchar();
			for (i = 0; i<x; i++)
		    {	
				printf("\nDigite um algarismo: ");
				scanf("%d", &oct[i]);
			}
		octdec(oct, x);
	}
		else if(d == 8)
		{													
			printf("decimal: ");
			scanf ("%d", &dec);
			getchar();
			printf ("\n %o", dec);
		}
	
	return 0;
}
