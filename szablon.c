#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	float a,b,c, delta, pd, x1, x2, x3;
	int k;
	do {
		printf("Podaj wspolczynniki rownania: \n");
		scanf("%f", &a);
		scanf("%f", &b);
		scanf("%f", &c);
		printf("Rozwiazanie dla %fx^2 + %fx+ %f = 0\n", a, b, c);
		delta= b*b-4.0*a*c;
		if (delta>0){
			pd=sqrt(delta); 
			x1=(-b-pd)/(2*a);
			x2=(-b+pd)/(2*a);
			x3=-2*c/(b+pd);
			printf("dwa pierwiastki rzeczywiste x1=%f, x2=%f, x2=%f\n", x1, x2, x3);
		}
		else{
			if (delta==0){
				printf("pierwiastek podwojny x=%f\n", -b/(2*a));
			}
			else {
				printf("brak rozwiazan rzeczywistych\n");
			}
		}
		
		
		printf("Jeszcze raz? (0-nie, 1-tak)  ");
		scanf("%i", &k);
	} while (k!=0);
	
	
	system("pause");
}
