#include "binary_trees.h"

/**
 *binary_tree_node - Function that creates a binary tree node
 *@parent: Is a pointer to the parent node of the node to create
 *@value: Is the value to put in the new node
 *Return: The new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (!root)
	{
		free(root);
		return (NULL);
	}
	if (!value)
	{
		free(root);
		return (NULL);
	}
	root->parent = parent;
	root->n = value;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
