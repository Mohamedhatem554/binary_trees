#include "binary_trees.h"


/**
 * binary_tree_node - create binary tree node
 * @parent: parent node
 * @value: value of new node
 * Return: new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (!node)
	return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
