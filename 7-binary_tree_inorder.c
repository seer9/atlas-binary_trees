#include "binary_trees.h"
/**
 * binary_tree_inorder - inorder traversal of a binary tree
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to the function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
