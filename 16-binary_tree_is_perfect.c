#include "binary_trees.h"

/**
 * tree_height - Computes the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the binary tree, 0 if tree is NULL
 */

int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = tree->left ? 1 + tree_height(tree->left) : 0;
	right = tree->right ? 1 + tree_height(tree->right) : 0;
	return (left > right ? left : right);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */



int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right  = tree_height(tree->right);

	if (left == right)
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	else
		return (0);
}
