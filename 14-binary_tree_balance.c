#include "binary_trees.h"

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
return (int)(binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
