#include "binary_trees.h"

/**
 * binary_tree_uncle - opening of file
 * @node: pointer to node to be assessed
 * Return: pointer to uncle of node, or NULL for errors
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *grandparent;
if (node == NULL)
{
return (NULL);
}
grandparent = node->parent->parent;
if (grandparent->left == node->parent)
{
if (grandparent->right == NULL)
{
return (NULL);
}
return (grandparent->right);
}
else
{
if (grandparent->left == NULL)
{
return (NULL);
}
return (grandparent->left);
}
return (NULL);
}
