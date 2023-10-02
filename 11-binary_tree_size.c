#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size (number of nodes) of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size (number of nodes) of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0); /* If tree is NULL, return 0 */

    /* Calculate the size of the left subtree */
    size_t left_size = binary_tree_size(tree->left);

    /* Calculate the size of the right subtree */
    size_t right_size = binary_tree_size(tree->right);

    /* Return the size of the current tree (1 for the current node) */
    return (1 + left_size + right_size);
}
