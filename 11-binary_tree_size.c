#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size (number of nodes) of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size (number of nodes) of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_size, right_size;

    if (tree == NULL)
        return (0); /* If tree is NULL, return 0 */

    /* Recursively calculate the size of the left subtree */
    left_size = binary_tree_size(tree->left);

    /* Recursively calculate the size of the right subtree */
    right_size = binary_tree_size(tree->right);

    /* Return the size of the current tree (1 for the current node) */
    return (1 + left_size + right_size);
}

