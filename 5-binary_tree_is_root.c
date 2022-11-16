#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if given node is a root
 * @node: pointer to the node to check
 * Return: if node is a root 1, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int root = 0;

	if (node && !(node->parent))
		root = 1;

	return (root);
}
