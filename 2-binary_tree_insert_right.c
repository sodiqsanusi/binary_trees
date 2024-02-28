#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
*
* @parent: "binary_tree_t *"  pointer to the parent node of the node to create
* @value: "int" the value to put in the new node
* Return: "binary_tree_t *" Always new_tree to left node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));

	if (new_tree == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		free(new_tree);
		return (NULL);
	}

	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	new_tree->parent = parent;
	if (parent->right == NULL)
	{
		parent->right = new_tree;
	}
	else
	{
		new_tree->right = parent->right;
		parent->right = new_tree;
		(new_tree->right)->parent = new_tree;
	}
	return (new_tree);
}
