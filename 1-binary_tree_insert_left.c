#include "binary_trees.h"

/**
 * binary_tree_insert_left -  function that inserts a node as the left-child
 *                            of another node
 * @parent: pointer to the parent of the new node
 * @value:value to store in the new node
 *
 * Return: newNode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left == NULL)
		newNode->left = NULL;
	else
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);

}
