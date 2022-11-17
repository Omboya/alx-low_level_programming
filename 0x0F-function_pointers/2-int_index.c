#include "function_pointers.h"
/**
 *  * int_index - searches for an integer
 *   * @cmp: pointer to the function that compares
 *    * @size: size of the array
 *     * @array: array of elements
 *      *
 *       * Return: return the index of the first element of the comparison
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
