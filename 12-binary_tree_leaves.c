#include "binary_trees.h"

/**
 * binary_tree_leaves - opening of file
 * @tree: pointer to root of tree
 * Return: number of leaves in the tree, or 0 for errors
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
