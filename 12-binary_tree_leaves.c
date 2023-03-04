#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a tree
 * @tree: ponter to the root node of the tree
 * Return: 0 or the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves =  (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
	return (leaves);
}
