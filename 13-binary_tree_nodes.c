#include "binary_trees.h"

/**
 *binary_tree_nodes - function that counts the nodes with at least 1 child
 *@tree: is a pointer to the root node of the tree to count the number of nodes
 *Return: the counter
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		i++;
	return (i + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
