#include "sort.h"
/**
 * @brief
 *
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int split(int *arr, int low, int high, size_t size)
{
int pivot;
int i = low;
int j;
pivot = arr[high];
for (j = low; j < high; j++)
{
if (arr[j] < pivot)
{
swap(&arr[i], &arr[j]);
if (i != j)
print_array(arr, size);
i++;
}
}
    swap(&arr[i], &arr[high]);
    if (i != j)
        print_array(arr, size);
    return (i);
}
void quick_sort_array(int *arr, int low, int high, size_t size)
{
    int piv;
    if (low < high)
    {
        piv = split(arr, low, high, size);
        quick_sort_array(arr, low, piv - 1, size);
        quick_sort_array(arr, piv + 1, high, size);
    }
}
void quick_sort(int *array, size_t size)
{
    if (size < 2 || array == NULL)
        return;
    quick_sort_array(array, 0, size - 1, size);
}
