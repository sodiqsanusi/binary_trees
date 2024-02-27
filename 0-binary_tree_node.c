#include "binary_trees.h"

/**
* binary_tree_node - a function that creates a binary tree node
*
* @parent: a pointer to the parent node of the node to create
* @value: the value to put in the new node
* Return: "binary_tree_t *" A new binary tree
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));

	if (new_tree == NULL)
	{
		return (NULL);
	}
	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	if (parent == NULL)
	{
		new_tree->parent = NULL;
	}
	else
	{
		new_tree->parent = parent;
	}
	return (new_tree);
}
