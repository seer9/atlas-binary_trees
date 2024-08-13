#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the leaves
 * Return: Number of leaves in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
