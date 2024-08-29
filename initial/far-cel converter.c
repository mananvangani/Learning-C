#include <stdio.h> 
/*printing a table of celsius and far equivalents
the table will have temps in differences or steps of 20*/

main()
{
    int far, celsius;
    int lower,upper,step;

    lower=0; /*lower limit of temp*/
    upper=300;/* upper limit of temp*/
    step=20; /*difference or step in table contents*/

    far=lower;
    while (far<=upper)
    {
        celsius=5*(far-32)/9;
        printf("far-%d\t\tcelsius-%d\n", far, celsius);
        far=far+step;
    }
}