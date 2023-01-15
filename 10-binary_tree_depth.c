#include "binary_trees.h"

/**
 *binary_tree_depth - function tht measures the deep of a tree
 *@tree: a pointer to the given node of a binary tree
 *Return: the deep
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
	{
		int right_dist = binary_tree_depth(tree->parent);
		int left_dist = binary_tree_depth(tree->parent);

		if (left_dist > right_dist)
			return (left_dist + 1);
		else
			return (right_dist + 1);
	}
	return (0);
}
