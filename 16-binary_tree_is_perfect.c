#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0); /* If tree is NULL, return 0 */

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* Check if the left and right subtrees have the same height */
    if (left_height == right_height)
    {
        /* If the left and right subtrees are perfect, the tree is perfect */
        if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
            return (1);
    }

    return (0); /* Not a perfect binary tree */
}

