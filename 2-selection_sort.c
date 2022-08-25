#include "sort.h"
/**
 * @brief
 *
 */

void selection_sort(int *array, size_t size)
{
    size_t i = 0, j, min;
    int temp = 0;
    if (size == 0 || size == 1)
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
            
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
            print_array(array, size);
        }
    }
}