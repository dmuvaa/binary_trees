#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes a binary tree
 * @tree: tree to be deleted
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*Check if the tree exists. If not, do nothing */
	if (!tree)
		return;

	/* if right child exists, delete the right subtree */
	if (tree->right)
		binary_tree_delete(tree->right);

	/* if left child exists, delete the left subtree*/
	if (tree->left)
		binary_tree_delete(tree->left);

	/* delete the node after deleting subtrees */
	free(tree);
}
