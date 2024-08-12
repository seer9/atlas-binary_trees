#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  /* memory for the new node */
  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

  /* if failed, return NULL */
  if (new_node == NULL)
    return (NULL);

  /* Initialize the new node */
  new_node->n = value;
  new_node->parent = parent;
  new_node->left = NULL;
  new_node->right = NULL;

  /* already a left child? update the child's parent to the new node */
  if (parent->left != NULL)
  {
    parent->left->parent = new_node;
  }
  // Set the parent's left to the new node
  parent->left = new_node;

  // Return the new node
  return (new_node);
}