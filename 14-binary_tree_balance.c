#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 *binary_tree_balance - function that measures the balance factor
 *@tree:is a pointer to the root node of the tree to measure the balance factor
 *Return: the counter
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);

	return ((left) - (right));
}

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
