#include "binary_trees.h"

/**
 * binary_tree_node - A new binary tree node
 *
 * @parent: - pointer to the parent node
 * @value: - the value to put in the new node
 * Return: a pointer to the new node, or NULL on fail
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;

	Node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (Node == NULL)
	{
		return (NULL);
	}

	Node->parent = parent;
	Node->n = value;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}
