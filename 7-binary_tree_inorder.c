#include "binary_trees.h"

/**
 * binary_tree_inorder - BT inorder traversal
 * @tree: tree for traversal
 * @func: function for calling each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);

	func(tree->value);

	binary_tree_inorder(tree->right, func);
}
