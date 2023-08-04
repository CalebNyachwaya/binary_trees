#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: a pointer to the node to be measured
 *
 * Return: if node is present - depth of the node
 *         otherwise - 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth;
	const binary_tree_t *current;

	current = tree;

	for (depth = 0; current->parent != NULL; depth++)
		current = current->parent;

	return (depth);
}

