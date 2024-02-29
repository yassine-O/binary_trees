#include "binary_trees.h"

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

/**
 * binary_tree_height - Description
 * @tree: Pointer
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		hl += 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		hr += 1 + binary_tree_height(tree->right);
	}

	return (MAX(hl, hr));
}
