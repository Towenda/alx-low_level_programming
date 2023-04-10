#include "main.h"
/**
* set_bit - sets the value of a bit at a given index to 1
* @n: pointer to the number
* @index: index of the bit to set
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1); /* if index is greater than number of bits */
*n |= (1 << index); /* set the bit at the given index */
return (1);
}
