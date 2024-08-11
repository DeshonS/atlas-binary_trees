#include "binary_trees.h"

/**
 * binary_tree_height - opening of file
 * @tree: pointer to the root of the tree
 * Return: Height of the tallest side of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL)
{
return (0);
}
left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
right = tree->right ? binary_tree_height(tree->right) + 1 : 0;
return (left > right ? left : right);
}

/**
 * binary_tree_balance - opening of file
 * @tree: pointer to root of tree
 * Return: factor balance of tree, or 0 for errors
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (int)(binary_tree_height(tree->left) - binary_tree_height(tree->right) + 1);
}
