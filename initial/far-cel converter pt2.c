#include <stdio.h>

main()

{ float lower, upper, step;
float fahr, celsius;

lower=0;
upper=300;
step=20;

fahr=lower;
while(fahr<=upper){
    celsius=(5.0/9.0)*(fahr-32.0);
    printf("%3.2f\t|%4.3f\n\n",fahr,celsius);
    fahr=fahr+step;}

}