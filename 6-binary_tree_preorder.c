#include "binary_trees.h"
/**
 * binary_tree_preorder - Print's tree Element's Through Pre-order Traversal
 * @tree: tree to be Traverse
 * @func: Function's to be Use.
 * Return: Nothing OR 0.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
