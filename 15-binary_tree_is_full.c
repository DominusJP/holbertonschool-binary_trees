#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the binary tree is full, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0); /* If tree is NULL, return 0 */

    /* If the node is a leaf, it is full by definition */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* If the node has one child, it is not a full binary tree */
    if ((tree->left == NULL && tree->right != NULL) || (tree->left != NULL && tree->right == NULL))
        return (0);

    /* Recursively check if the left and right subtrees are full */
    return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

