#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 *
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);
	binary_tree_t *old_node;

	if (new_node == NULL || parent == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		old_node = parent->right;
		new_node->right  = old_node;
	}
	parent->right = new_node;
	return (new_node);
}
