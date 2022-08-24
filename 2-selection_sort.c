#include "sort.h"
/**
 * @brief
 * 
 */
void swap (int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
void selection_sort(int *array, size_t size)
{
size_t i, j, jmin;
for (i = 0; i < size - 1; i++)
{
jmin = i;
for (j = i+1; j < size; j++)
if (array[j] < array [jmin])
jmin = j;
if (jmin != i)
swap(&array[jmin], &array[i]);
print_array(array, size);
}
}
