#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: points to the root node of the tree to measure the height
 * Return: 0 or height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	if (right > left)
		return (right + 1);
	else
		return (left + 1);
}
