#include "binary_trees.h"

/**
 * binary_tree_height - opening of file
 * @tree: pointer to the root of the tree
 * Return: Height of the tallest side of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right, final;

if (tree == NULL)
{
return (0);
}
if (tree->left == NULL || tree->right == NULL)
{
return (0);
}
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return ((left > right ? left : right) + 1);
