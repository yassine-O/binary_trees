#include "binary_trees.h"

/**
 * binary_tree_is_full - Description
 * @tree: Pointer
 * Return: void
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left != NULL && tree->right != NULL)
		full = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	else
		return (0);

	return (full);
}
