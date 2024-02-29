#include "binary_trees.h"

/**
 * binary_tree_insert_right - Introduces a Node as Another Node's right-child
 * @parent: A Pointer to the Node Where the Right-child Should be Added In
 * @value: Value to be Store in the New Node
 *
 * Return: Pointer to the Newly Generated node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
