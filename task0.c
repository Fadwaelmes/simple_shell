#include <stdio.h>
/**
 * main - this the main funt
 *
 * @void: void return nothing
 * Return: Return
 */
int main(void)
{
printf("this is a program that will calculate the surface of a circle\n");
float ray, surf;
const float pi = 3.14;
printf("please enter the radius of the circle: ");
scanf("%f", &ray);
printf("the radius is %.2f and the pi is %.2f\n", ray, pi);
surf = pi * (ray * ray);
printf("so the surface is pi: %.2f * (%.2f * %.2f)\n", pi, ray, ray);
printf("the surface of the circle is %.2f\n", surf);
return (0);
}
