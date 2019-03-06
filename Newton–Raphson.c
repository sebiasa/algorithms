#include <stdlib.h>
#include <stdio.h>
/*
	@Bogdan Sebastian

	Params : - n real number 
			 - epsilon also real number between 0 and 1

	Description :
			This function is based on Newtons Method of finding a solution to the equation X^2 - N =0;
			This equation can be considered as a function where f(x) = x^2 - n;
			The method is based on finding the point that crosses X axis with the tangent of this function
			and for that point , again the same thing applied repeatedly thus getting closer and closer to the square root 
	Post  : function returns the value of the square root of n with epsilon accuracy
*/
float NewtonRaphson(float n, float epsilon)
{
	float x, y,r;
	x = n;
	y = x - (x*x - n) / (2 * x);
	while (x - y > epsilon) {
		x = y;
		y = x - (x*x - n) / (2 * x);
		
	} 
	
	return y;
}
void main() {
	float n, epsilon;
	char s;
	printf("Give the number you want its square root to be found >>");
	scanf("%f", &n);
	printf("Give the precision >>");
	scanf("%f",&epsilon);

	printf("Sqrt(%f) = %f", n, NewtonRaphson(n, epsilon));
	
}