#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: the binary tree.
 * Return: 0 if the tree is empty else the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree ==  NULL)
		return (0);
	left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return ((left  > right) ? left : right);
}



/**
 * binary_tree_balance -  measures the balance factor of a binary tree.
 * @tree: binary tree
 * Return: the balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
