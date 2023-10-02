#include <stdlib.h>
#include "binary_trees.h" /* Include the binary_trees.h header */

/* Function to insert a node as the left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Check if parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL); /* Return NULL on failure to allocate memory */

    /* Initialize the new node's values */
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    /* Check if parent already has a left-child */
    if (parent->left != NULL)
    {
        /* Set the new node's left-child to the current left-child of the parent */
        new_node->left = parent->left;
        /* Update the current left-child's parent pointer to point to the new node */
        parent->left->parent = new_node;
    }

    /* Set the parent's left-child pointer to the new node */
    parent->left = new_node;

    return (new_node); /* Return a pointer to the created node */
}

