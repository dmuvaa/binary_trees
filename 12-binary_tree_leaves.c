#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count leaves in a binary tree
 * @tree: pointer to the root node of tree
 * Return: 0 if tree is NULL, and NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL)
	{
		return (1);
	}

	if (tree->right == NULL)
	{
		return (1);
	}

	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}

	return (0);
}
