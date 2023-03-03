#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child
 * @value: is the value to store in the new node
 * Return: a pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new =  malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	new->n = value;
	if (parent->right == NULL)
		return (parent->right = new);
	parent->right->parent = new;
	new->right = parent->right;
	parent->right = new;
	return (new);
}
