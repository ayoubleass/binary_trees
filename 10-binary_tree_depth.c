#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree.
 * @tree: the binary tree.
 * Return: 0 if the tree is empty else the height.
 */



size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree ==  NULL)
		return (0);
	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}
