#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node on the right
 * @parent: parent node
 * @value: the value of new node
 * Return: new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
	return (NULL);

	node = binary_tree_node(parent, value);
	if (parent->right)
	{
		parent->right->parent = node;
		node->right = parent->right;

	}
	parent->right = node;
	return (node);
}
