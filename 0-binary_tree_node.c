#include "binary_trees.h"

/**
 * binary_tree_node - generate's a binary tree node
 * @parent: a pointer to the node to be created's parent node
 * @value: value to be put in the new node
 *
 * Return: Pointer to the newly generated node
 *         NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
