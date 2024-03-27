#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the node is a leaf
 * @node: the node
 * Return: 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->left) && !(node->right))
		return (1);
	else
		return (0);
}
