#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of the binary tree
 * @tree: tree to measure its depth
 * Return: depth of the tree, 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
