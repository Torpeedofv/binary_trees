#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 or the depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth =  binary_tree_depth(tree->parent);
	return (depth + 1);
}
