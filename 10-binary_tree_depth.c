#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t left, right;
  if (tree == NULL)
    return (0);

  left = binary_tree_depth(tree->left);
  right = binary_tree_depth(tree->right);

  if (left > right)
    return (left + 1);

return (right + 1);
}