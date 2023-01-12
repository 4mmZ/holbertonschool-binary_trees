#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (!value)
	{
		free(root);
		return(NULL);
	}
	root->parent = parent;
	root->n = value;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
