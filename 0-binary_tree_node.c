#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to the parent of new node
 * @value: value to be used for the new node
 *
 * Return: returns a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	/* value of newNode is the values passed as an argument */
	newNode->n = value;
	/* sets the parent pointer of the new node to the node passed as argument */
	newNode->parent = parent;
	/* does not have left child */
	newNode->left = NULL;
	/* does not have right child */
	newNode->right = NULL;

	return (newNode);
}
