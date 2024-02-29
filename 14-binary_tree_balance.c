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

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	return (hl - hr);
}

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

	hl += 1 + binary_tree_height(tree->left);
	hr += 1 + binary_tree_height(tree->right);

	return (MAX(hl, hr));
}
