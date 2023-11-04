#include "binary_trees.h"

/**
 * binary_tree_delete - deletes nodes of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: Success
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
