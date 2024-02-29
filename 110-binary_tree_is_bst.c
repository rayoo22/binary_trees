#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid
 * Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is valid BST
 * 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - checks if a binary tree is a valid Binary Searh Tree
 * @tree: a pointer to the root node of the tree to check
 * @min: lower bound of checked nodes
 * @max: upper bound of checkd nodes
 * Return: 1 if tree is valid BST
 * 0 otherwise
 */
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
			btib_helper(tree->right, tree->n + 1, max));
}