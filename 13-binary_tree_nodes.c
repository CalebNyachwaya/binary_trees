#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: a pointer to the root of the tree to be counted
 *
 * Return: no. of nodes with atleast 1 child - child
 *         otherwise - 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodesCount;

	nodesCount = 0;
	if (tree)
	{
		/* check if the node has atleast 1 child */
		if (tree->right != NULL || tree->left != NULL)
			nodesCount += 1;
		nodesCount += binary_tree_nodes(tree->left);
		nodesCount += binary_tree_nodes(tree->right);
	}
	return (nodesCount);
}
