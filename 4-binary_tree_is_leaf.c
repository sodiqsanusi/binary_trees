#include "binary_trees.h"

/**
* binary_tree_is_leaf - a function that checks if a node is a leaf
*
* @node: "const binary_tree *" pointer to the node to check
* Return: "int" 0 and 1 if node is a leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
