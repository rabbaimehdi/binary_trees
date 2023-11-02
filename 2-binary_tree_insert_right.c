#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right
 *
 * @parent: pointer to the right child node
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on fail
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Node;

	if (!parent)
		return (NULL);

	Node = malloc(sizeof(binary_tree_t));
	if (!Node)
		return (NULL);

	Node->n = value;
	Node->parent = parent;
	Node->left = NULL;
	Node->right = parent->right;
	parent->right = Node;
	if (Node->right)
		Node->right->parent = Node;
	return (Node);
}
