#include "binary_tree_preorder.c"

/**
 * binary_tree_preorder - a binary tree using preorder traversal
 * @tree: a pointer to the root node of the tree
 * @func: a pointer tot a function to call for each node
 * Otherwise 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
