#include "binary_trees.h"
/**
 * tree_is_perfect - Function that State's if a tree is Perfect or Not
 * it has to be Of the Same Quantity Levels in Left as Right, and Also
 * Each Node has to have 2 Nodes or None
 * @tree: tree to be Check
 * Return: 0 if is not Perfect or Other Numb that has same the
 * Level of hHight
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - Perfect or Not a tree
 * @tree: tree to be Check
 * Return: 1 if it is Perfect or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
