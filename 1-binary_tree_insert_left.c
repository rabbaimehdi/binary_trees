#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left
 *
 * @parent: pointer to the left child node
 * @value:  the value to put in the new node
 *
 *
 * Return: a pointer to the new node, or NULL on fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;

	if (!parent)
		return (NULL);

	Node = malloc(sizeof(binary_tree_t));
	if (!Node)
		return (NULL);

	Node->n = value;
	Node->parent = parent;
	Node->right = NULL;
	Node->left = parent->left;
	parent->left = Node;
	if (Node->left)
		Node->left->parent = Node;
	return (Node);
}
