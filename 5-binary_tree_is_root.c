#include "binary_trees.h"

/**
 * binary_tree_is_root - opening of file
 * @node: pointer to node to check for root status
 * Return: 1 for root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (node->parent == NULL)
{
return (1);
}
return (0);
}
