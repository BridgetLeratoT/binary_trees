#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t i = 0, m = 0;

		i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		m = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((i > m) ? i : m);
	}
	return (0);
}
