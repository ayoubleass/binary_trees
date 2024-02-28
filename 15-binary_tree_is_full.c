#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the binary tree.
 * Return: 1 if the tree is full, 0 otherwise. If the tree is NULL, returns 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return  (1);
	if ((tree->left == NULL && tree->right != NULL)
			|| (tree->right == NULL && tree->left))
		return (0);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
