#include "binary_trees.h"
/**
 * binary_tree_depth - Check's the Depth of the Specified Node's From Root
 * @tree: Node to Check the Depth
 * Return: 0 IF it is the Root or Numb. of Depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
