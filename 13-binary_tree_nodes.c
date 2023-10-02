#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the nodes.
 *
 * Return: The number of non-leaf nodes in the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t left_nodes, right_nodes;

    if (tree == NULL)
        return (0); /* If tree is NULL, return 0 */

    /* Check if the node is a non-leaf node (has at least one child) */
    if (tree->left != NULL || tree->right != NULL)
    {
        /* Recursively count non-leaf nodes in the left and right subtrees */
        left_nodes = binary_tree_nodes(tree->left);
        right_nodes = binary_tree_nodes(tree->right);

        /* Return the sum of non-leaf nodes in the subtrees plus 1 (current node) */
        return (1 + left_nodes + right_nodes);
    }

    return (0); /* Node is a leaf (no children) */
}

