#include "binary_trees.h"
/**
 * binary_tree_nodes - creates an array of nodes
 * @tree: pointer to the root node of the tree
 *
 * Return: pointer to the array of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
