#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: Size of the tree starting from 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure
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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, expo = 1;
	int i = 0;

	if (tree == NULL)
		return (1);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	while (i < height)
	{
		expo *= 2;
		i++;
	}
	if (size == expo)
		return (1);
return (0);
}
