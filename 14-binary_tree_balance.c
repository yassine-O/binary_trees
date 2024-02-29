#include "binary_trees.h"

/**
 * binary_tree_balance - Description
 * @tree: Pointer
 * Return: void
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hl = 0, hr = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		hl += 1 + binary_tree_balance(tree->left);
	}

	if (tree->right != NULL)
	{
		hr += 1 + binary_tree_balance(tree->right);
	}

	return (hl - hr);
}
