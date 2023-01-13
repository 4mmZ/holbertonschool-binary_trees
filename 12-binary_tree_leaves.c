#include "binary_trees.h"
/**
 * binary_tree_leaves- counts the leaves in a binary tree
 * @tree: pointer to the root of a tree
 * Return: void
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (tree->left == 0 && tree->right == 0)
	{
		return (1);
	}
	else
	{
		return  (binary_tree_leaves(tree->left) +  binary_tree_leaves(tree->right));
	}
}
