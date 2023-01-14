#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of a tree
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	else
	{
		int ld = binary_tree_height(tree->left);
		int rd = binary_tree_height(tree->right);

		if (ld > rd)
		{
			return (ld + 1);
		}
		else
		{
			return (rd + 1);
		}
	}
}
