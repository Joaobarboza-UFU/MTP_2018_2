/* P6.c */
/* João Barboza Rodrigues */
/* 11811ECP005 */


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
	double x;
	double y;
	} point;

point * circulo(int N){
	point * points = (point *) calloc(N,sizeof(point));
	for (int i=0;i<N;i++){
		points[i].x = cos(i*2.0*M_PI/(N-1));
		points[i].y = sin(i*2.0*M_PI/(N-1));
	}
	return points;
};

void mostrapoint(point * p_ini, point * p_fim){
	if(p_ini < p_fim){
		printf("(%.3lf,%.3lf) ",p_ini->x,p_ini->y);
	mostrapoint(p_ini+1,p_fim);
	}
}

int main(){

	int N;
	point * points;
	printf("Digite o numero de points que voce quer: ");
	scanf("%i",&N);
	getchar();
	points = circulo(N);
	mostra_points(points,points + N);
	free(points);
	return 0;
}
