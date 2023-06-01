#include "binary_trees.h"

/**
 * binary_tree_height - function to measure the height of a binary tree
 * @tree: tree to fin the height for
 * Return: return zero if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL)
	{
		return (0);
	}

	if (tree->right == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
	{
		return (left_height + 1);
	}
	else
	{
		return (right_height + 1);
	}
}
