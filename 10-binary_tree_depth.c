#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: the node
 * Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int s = 0;

	if (!tree)
		return (0);
	if (tree->parent != NULL)
		s = 1 + binary_tree_depth(tree->parent);
	return (s);
}
