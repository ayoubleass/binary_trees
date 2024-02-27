#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is the root node in the tree.
 * @node: binaty tree.
 * Return: integer
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
