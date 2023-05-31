#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right child node
 * @parent:  pointer to the node to insert the right-child
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure, if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}

	new_node->left = NULL;
	parent->left = new_node;

	return (new_node);
}
