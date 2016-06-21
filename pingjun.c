#include<stdio.h>
double pj(double a,double b);
int 
main()
{
double x,y;
scanf("%lf%lf",&x,&y);
printf("pingjunshu=%lf",pj(x,y));
	
}
double pj(double a,double b)
{
double c;
c=(a+b)/2;
return c;

}
