#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses BT in pre-order
 * @tree: pointer to object
 * @func: fuction pointer as a prameter
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
