#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determine's Whether a Node is a leaf
 * @node: Node to Check
 *
 * Return: 1 If Node is a leaf
 *         0 If Not a leaf
 *         0 If Node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
