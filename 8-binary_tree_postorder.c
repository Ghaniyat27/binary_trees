#include "binary_trees.h"
/**
 * binary_tree_postorder - Print Element's of The tree Using post-order Traversal
 * @tree: tree To Trasverse
 * @func: Function to Use.
 * Return: Nothing OR 0
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
