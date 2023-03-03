#include "binary_trees.h"
/**
 * binary_tree_node - Creates new node in tree
 * @parent: is apointer to the parent node of the node to create
 * @value: is the value to put in the new code
 * Return: a new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (!root)
		return (NULL);
	root->parent = parent;
	root->n = value;
	root->left = NULL;
	root->right = NULL;
	return (root);
}
