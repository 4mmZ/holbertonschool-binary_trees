#include "binary_trees.h"

/**
 *binary_tree_insert_left -  function that inserts a node
 * as the left-child of another node
 *@parent - Is a pointer to the node to insert the left-child in
 *@value - Is the value to store in the new node
 *Return: A pointer ti the create node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (!root)
	{
		free(root);
		return (NULL);
	}
	root->parent = parent;
	root->n = value;
	if (parent->left)
	{
		root->left = parent->left;
		parent->left->parent = root;
	}
	parent->left = root;

	return (parent->left);
}
