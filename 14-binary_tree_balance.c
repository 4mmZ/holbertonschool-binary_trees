#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 *binary_tree_balance - function that measures the balance factor
 *@tree:is a pointer to the root node of the tree to measure the balance factor
 *Return: the counter
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	return ((left) - (right));
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
