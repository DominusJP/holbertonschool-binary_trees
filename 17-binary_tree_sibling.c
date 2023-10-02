#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node. If node is NULL, the parent is NULL,
 * or node has no sibling, return NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return (NULL); /* If node or parent is NULL, return NULL */

    /* Determine if node is the left or right child of its parent */
    if (node->parent->left == node)
        return (node->parent->right); /* Return the right child as the sibling */
    else
        return (node->parent->left); /* Return the left child as the sibling */
}

