#include "binary_trees.h"

/**
 * binary_tree_height - function to measure the height of a binary tree
 * @tree: tree to fin the height for
 * Return: return zero if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}

	if (tree->right)
	{
		right_height = binary_tree_height(tree->right) +1;
	}

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}