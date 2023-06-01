#include "binary_trees.h"

/**
 * binary_tree_size - function to measure the size of BT
 * @tree: tree to get size for
 * Return: 0 if tree is null or size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == 0)
	{
		return (0);
	}

	else
	{
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	}
}
