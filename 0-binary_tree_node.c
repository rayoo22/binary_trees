#include "binary_trees.h"

/**
 * binary_tree_node - a function creating a node for binary tree
 * @parent: pointer to parent
 * @value: value for node created
 * Description: creates a binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
	{
		return (NULL);
	}
	nodo->n = value;
	nodo->parent = parent;
	nodo->left = NULL;
	nodo->right = NULL;
	return (nodo);
}
