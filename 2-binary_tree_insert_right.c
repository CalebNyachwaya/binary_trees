#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the
 *                            right-child of another node
 * @parent: pointer to the node to insert to the right-child
 * @value: value to store in the new node
 *
 * Return: Return: If parent is NULL or an error occurs (NULL)
 *         Otherwise - a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	if (parent->right == NULL)
		newNode->right = NULL;
	else
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
