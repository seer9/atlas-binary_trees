#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: height of the tree starting from 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left < right)
		return (right + 1);
return (left + 1);
}
