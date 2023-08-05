#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a tree
 * @tree: a pointer to the root of the tree to be counted
 *
 * Return: number or leaves - leaves
 *         otherwise - 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree)
	{
		/* check if the node is a leaf */
		if (tree->right == NULL && tree->left == NULL)
			leaves += 1;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
