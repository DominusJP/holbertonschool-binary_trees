#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a root, otherwise 0. If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0); /* If node is NULL, return 0 */

    /* Check if the node has no parent (is a root) */
    if (node->parent == NULL)
        return (1);

    return (0); /* Node is not a root */
}

