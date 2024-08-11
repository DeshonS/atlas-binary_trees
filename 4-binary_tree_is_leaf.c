#include "binary_trees.h"

/**
 * binary_tree_is_leaf - opening of file
 * @node: pointer to node to check for leaf
 * Return: 1 for leaf, 0 for everything else
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (node->left == NULL && node->right == NULL)
{
return (1);
}
return (0);
}
