#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a tree
 * @tree: points to the root node of the tree
 * Return: 0 or the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
