#include "main.h"
/**
 *_sqrt_recursion - return the natural square root of a nuber
 *@root: root values of n
 *@n: value to anaize
 *Return: sqrt_root (success)
 */
int sqrt_root(int root, int n);

int _sqrt_recursion(int n)
{
	return (sqrt_root(0, n));
}
/**
 *sqrt_root - root of a number
 *@root: rootvalue of n
 *@n: value to analize
 *Return: square root (success)
 */
int sqrt_root(int root, int n)
{
	int sqr = root = root;

	if (sqr < n)
		return (sqrt_root(root + 1, n));
	else if (sqr > n)
		return (-1);
	return (root);
}
