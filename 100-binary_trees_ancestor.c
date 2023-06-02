#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the lowest common ancestor
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: pointer to lowest common ancestor, or NULL of no ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *new_node;

	if (first == NULL)
	{
		return (NULL);
	}

	if (second == NULL)
	{
		return (NULL);
	}

	while (first)
	{
		new_node = second;
		while (new_node)
		{
			if (first == new_node)
				return ((binary_tree_t *)first);
			new_node = new_node->parent;
		}
		first = first->parent;
	}

	return (NULL);
}
