#include "binary_trees.h"

/**
 * binary_tree_height - function to measure the height of a binary tree
 * @tree: tree to fin the height for
 * Return: return zero if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *right_height;
	binary_tree_t *left_height;

	right_height = malloc(sizeof(binary_tree_t));
	left_height = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (0);
	}

	else
	{
		int left_height = binary_tree_height(parent->NULL);
		int right_height = binary_tree_height(parent->NULL);

		if (left_height >= right_height)
		{
			return (left_height + 1);
		}
		else
		{
			return (right_height + 1);
		}
	}
}
