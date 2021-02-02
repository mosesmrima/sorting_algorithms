#include <sort.h>
/**
 *bubble_sort - function to impliment the bubble sort algorithm
 *@array: pointer to the array to sort
 *@size: size of the aray
 *return - does not return
 **/
void bubble_sort(int *array, size_t size)
{
	int i, j, temp;
	bool swap = false;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap = true;
			}
		}
		print_array(array, size);
		if (swap == false)
			break;
	}
}
