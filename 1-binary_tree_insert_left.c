#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  /* alloc for node */
  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

  /* return null on failure */
  if (new_node == NULL)
    return (NULL);

  /* sets value of node */
  new_node->n = value;
  /* sets the parent of the node */
  new_node->parent = parent;
  /* sets left and right child to null */
  new_node->left = NULL;
  new_node->right = NULL;
  /* if theres already a left child */
  if (parent->left != NULL)
  {
  /* change the parent of the existing left child */
    parent->left->parent = new_node;
  /* set the left child to existing left child */
    new_node->left = parent->left;
  }
  /* set the left child of parent */
  parent->left = new_node;
  
  return (new_node);
}