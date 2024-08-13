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

	if (left > right)
		return (left + 1);
return (right + 1);
}
/**
 * binary_tree_balance - balances a binary tree
 * @tree: pointer to the root node of the tree to balance
 *
 * Return: 1 if the tree is balanced, 0 otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

