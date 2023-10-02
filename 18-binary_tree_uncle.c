#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: A pointer to the uncle node. If node is NULL, has no parent, or
 * no uncle, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL); /* If node, parent, or grandparent is NULL, return NULL */

	/* Determine if the parent of the node is the left or right child of its grandparent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right); /* Return the right child of the grandparent */
	else
		return (node->parent->parent->left); /* Return the left child of the grandparent */
}
