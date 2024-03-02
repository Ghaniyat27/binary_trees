#include "binary_trees.h"

/**
 * binary_tree_uncle - Find's the Uncle of a Node
 * @node: A Pointer to the Node to Find the Uncle
 *
 * Return: Pointer to the Uncle Node
 *         NULL if Node is NULL
 *         NULL if the Parent is NULL
 *         NULL if the Node has no Uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Locate the Sibling of a Node
 * @node: Pointer to the Node to Find the Sibling
 *
 * Return: pointer to the Sibling Node
 *         NULL if Node is NULL
 *         NULL if the Parent is NULL
 *         NULL if the Node has no Siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
