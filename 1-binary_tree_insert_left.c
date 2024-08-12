#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  /* node to be added */
    binary_tree_t *new_node;
  /* Check for parent being NULL */
    if (parent == NULL)
        return (NULL);

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node */
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = parent->left;
    new_node->right = NULL;

    /* If parent already has a left child, update its parent to the new node */
    if (parent->left != NULL)
        parent->left->parent = new_node;

    /* Insert the new node as the left child of the parent */
    parent->left = new_node;
return (new_node);
}