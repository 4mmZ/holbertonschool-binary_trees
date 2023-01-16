#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

/**
 *binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree: a pointer to the given node
 *Return: 1 if is perfect or 0 is is not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == 0)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return
		(binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->left));
	return (0);
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
