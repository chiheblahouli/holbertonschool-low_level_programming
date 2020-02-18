#include "holberton.h"
**/
swap_int - swaps the values of two integers
* @a : parameter
* @b : parameter
* return : always 0.
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
