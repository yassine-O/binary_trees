#include "binary_trees.h"

/**
 * binary_tree_size - Description
 * @tree: Pointer
 * Return: void
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 1;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (size);
}
