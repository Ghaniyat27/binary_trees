#include "binary_trees.h"
/**
 * binary_tree_leaves - Function That Gives back a tree's leaf Count
 * @tree: tree to be Check
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, l = 0, w = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_leaves(tree->left);
		w = binary_tree_leaves(tree->right);
		leaf = l + w;
		return ((!l && !w) ? leaf + 1 : leaf + 0);
	}
}
