#include "binary_trees.h"



/**
 * binary_tree_nodes - counts the nodes with at least one child.
 * @tree:  binary tree.
 *
 * Return:the number of nodes with at least one child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
