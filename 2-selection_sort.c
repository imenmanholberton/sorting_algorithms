#include "sort.h"
/**
 * @brief
 *
 */
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void selection_sort(int *array, size_t size)
{
    size_t i = 0, j, min;
   if (size == 0|| size == 1)
    {
        return;
    }
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        if (array[j] < array[min])
        {
        min = j;
        }
        if (i != min)
        {
        swap(array[i], array[min]);
        print_array(array, size);
        }
    }
}