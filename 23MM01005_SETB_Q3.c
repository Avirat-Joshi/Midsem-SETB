#include<stdio.h>
int main()
{
    float r,x,y,x1,y1;
    printf("Enter x coordinate of centre of the circle: ");
    scanf("%f",&x);
    printf("\nEnter y coordinate of centre of the circle: ");
    scanf("%f",&y);
    printf("\nEnter radius of the circle: ");
    scanf("%f",&r);
    printf("\nEnter x coordinate of the point to be checked : ");
    scanf("%f",&x1);
    printf("\nEnter y coordinate of the point to be checked  ");
    scanf("%f",&y1);
    float check = ((x1-x)*(x1-x))+((y1-y)*(y1-y))-(r*r);
    if(check<0)
        printf("\nPoint lies inside the circle");
    if(check>0)
        printf("\nPoint lies outside the circle");
    if(check==0)
        printf("\nPoint lies on the circle");
    return 0;
}