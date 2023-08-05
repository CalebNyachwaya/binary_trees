#include "binary_trees.h"

/**
 * binary_tree_balance - a function that measures the balance factor
 *                       of a binary tree
 * @tree: a pointer to the toot node of the tree to measure
 *
 * Return: balance factor
 *         otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t rightHeight = 0, leftHeight = 0;

	if (tree)
	{
		/* check if left child id present and add to leftHeight */
		leftHeight = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		/* check if right child id present and add to rightHeight */
		rightHeight = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	}

	/* return the difference */
	return (leftHeight - rightHeight);
}
