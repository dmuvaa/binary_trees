#include "binary_trees.h"

/**
 * calculate_depth - function that calculates leaf depth
 * @node: pointer to tree node
 * Return: depth of BT
 */

int calculate_depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node != NULL)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}

/**
 * is_perfect - check if nodes have 2 childs
 * @tree: pointer to root node
 * @depth: depth of leafmost leaf
 *
 * Return: 1 if BT is perfect, otherwise 0
 */

int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (depth == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - check if BT is perfect
 * @tree: pointer to the tree root node
 *
 * Return: 1 if BT perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
	{
		return (0);
	}

	depth = calculate_depth(tree);

	return (is_perfect(tree, depth, 0));
}
