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
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
