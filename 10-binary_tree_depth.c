#include "binary_trees.h"

/**
 * recursive_depth - measures depth of a node
 * @tree: tree root
 * Return: depth of a node in a binary tree
 */
size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls recursive depth
 * @tree: pointer to the node to measure depth
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}
