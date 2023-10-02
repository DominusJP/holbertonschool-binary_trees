#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node. The node's value
 *        will be passed as a parameter to this function.
 *
 * If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return; /* If tree or func is NULL, do nothing */

    /* Apply the function to the current node */
    func(tree->n);

    /* Recursively traverse the left subtree */
    binary_tree_preorder(tree->left, func);

    /* Recursively traverse the right subtree */
    binary_tree_preorder(tree->right, func);
}

