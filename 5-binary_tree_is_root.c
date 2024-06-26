#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node is root
 * @node: the node
 * Return: 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->parent))
		return (1);
	else
		return (0);
}
