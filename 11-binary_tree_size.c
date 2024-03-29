#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: size of the tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)

{
	size_t left_node_count, right_node_count, current_node_count;

	if (tree == NULL)

	return (0);

	current_node_count = 1;

	left_node_count = binary_tree_size(tree->left);
	right_node_count = binary_tree_size(tree->right);

	return (left_node_count + right_node_count + current_node_count);

}
