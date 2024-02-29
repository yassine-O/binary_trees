#include "binary_trees.h"

/**
 * binary_tree_nodes - Description
 * @tree: Pointer
 * Return: void
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int n = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		n += 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (n);
}
