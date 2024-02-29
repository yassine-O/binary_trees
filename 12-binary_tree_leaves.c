#include "binary_trees.h"

/**
 * binary_tree_leaves - Description
 * @tree: Pointer
 * Return: void
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (leaves);
}
