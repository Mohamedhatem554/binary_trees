#include "binary_trees.h"

/**
 * binary_tree_delete - delete node
 * @tree: the node
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
