#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: 0 or the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = 0;
	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
