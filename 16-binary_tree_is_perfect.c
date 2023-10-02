#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    /* Recursively calculate the height of the left subtree */
    left_height = binary_tree_height(tree->left);

    /* Recursively calculate the height of the right subtree */
    right_height = binary_tree_height(tree->right);

    /* Return the greater height of the two subtrees plus one (current node) */
    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0); /* If tree is NULL, return 0 */

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    /* Check if the left and right subtrees have the same height */
    if (left_height == right_height)
    {
        /* If the left and right subtrees are perfect, the tree is perfect */
        if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
            return (1);
    }

    return (0); /* Not a perfect binary tree */
}

