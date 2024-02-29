#include "binary_trees.h"

/**
 * binary_tree_delete - Delete's The Whole Entire Binary tree
 * @tree: tree to be Deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
