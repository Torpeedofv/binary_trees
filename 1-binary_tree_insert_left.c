#include "binary_trees.h"
/**
* binary_tree_insert_left - Inserts a nod as the left child of another node.
* @parent: pointer to the node to insert the left child
* @value: the value to store in the new node
* Return: a pointer to the new node or NULL if failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	new->n = value;
	if (!parent->left)
	{
		return (parent->left = new);
	}
	parent->left->parent = new;
	new->left = parent->left;
	parent->left = new;
	return (new);
}
