#include "binary_trees.h"

/**
 * binary_tree_height - compute the height of node
 * @tree: the node
 * Return: the height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
		int L = 0, R = 0;

		if (tree == NULL)
			return (0);
		if (tree->right)
			R = 1 + binary_tree_height(tree->right);
		if (tree->left)
			L = 1 + binary_tree_height(tree->left);

		return ((L > R) ? L : R);
}
