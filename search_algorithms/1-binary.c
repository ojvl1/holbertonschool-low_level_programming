#include "search_algos.h"
/**
 *rec_binary - recursion function
 *
 *@array: array of integers
 *@left: left index
 *@right: right index
 *@size: size of array
 *@v: value to find
 *Return: left, -1, mid and recursion
 */
size_t rec_binary(int *array, int left, int right, size_t size, int v)
{
	int i, mid;

	if (left == right)
	{
		printf("Searching in array: %d\n", array[left]);
			if (array[left] == v)
				return (left);
			else
				return (-1);
	}
	printf("Searching in array: ");
	for (i = left; i <=  right; i++)
	{
		if (i != left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");

	mid = (left + ((right - left) / 2));
	if (array[mid] == v)
		return (mid);
	if (v > array[mid])
		return (rec_binary(array, mid + 1, right, size, v));
	else
		return (rec_binary(array, left, mid - 1, size, v));
}


/**
 *binary_search - search the value in a sorted array
 *
 *@array: is a pointer to the first elementof the array to search
 *@size: is the number of elements in array
 *@value: is the value to search
 *Return: -1, match
 */
int binary_search(int *array, size_t size, int value)
{
	size_t match;

	if (array == NULL)
		return (-1);

	match = rec_binary(array, 0, size - 1, size, value);
	return (match);
}
