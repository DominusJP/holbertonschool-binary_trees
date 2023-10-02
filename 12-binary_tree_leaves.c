#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the binary tree. If tree is NULL, return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0); /* If tree is NULL, return 0 */

    /* If the node is a leaf (has no children), return 1 */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* Recursively count the leaves in the left and right subtrees */
    size_t left_leaves = binary_tree_leaves(tree->left);
    size_t right_leaves = binary_tree_leaves(tree->right);

    /* Return the sum of leaves in the left and right subtrees */
    return (left_leaves + right_leaves);
}

