#include "binary_trees.h"

/**
 * binary_tree_sibling - opening of file
 * @node: node to address sibling
 * Return: Siblingnode or NULL for errors
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if (!node)
{
return (NULL);
}
if (node == node->parent->left)
{
return (node->parent->right);
}
if (node == node->parent->right)
{
return (node->parent->left);
}
}
