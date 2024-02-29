#include "binary_trees.h"

/**
 * binary_tree_is_root - Check's If a Node is a Root
 * @node: Node to Check
 *
 * Return: 1 If node is a root
 *         0 If Is not a root
 *         0 If Node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
