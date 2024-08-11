#include "binary_trees.h"

/**
 * binary_tree_delete - opening of file
 * @tree: pointer to a tree
 * Return: None (void)
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
