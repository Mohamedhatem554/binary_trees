#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the node
 * Return: the balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int L = 0, R = 0;

	if (!tree)
		return (0);
	L = binary_tree_height_2(tree->left) + 1;
	R = binary_tree_height_2(tree->right) + 1;
	return (L - R);
}
