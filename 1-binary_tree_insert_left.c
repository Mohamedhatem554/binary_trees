#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node on the left
 * @parent: parent node
 * @value: the value of new node
 * Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
	return (NULL);

	node = binary_tree_node(parent, value);
	if (parent->left)
	{
		parent->left->parent = node;
		node->left = parent->left;

	}
	parent->left = node;
	return (node);
}
