#include "binary_trees.h"

/**
 * binary_tree_node - opening of file
 * @parent: parent node of node to be created
 * @value: value to input into new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

new = malloc(sizeof(binary_tree_t));
if (new == NULL)
{
return (NULL);
}
new->parent = parent;
new->left = NULL;
new->right = NULL;
new->n = value;
return (new);
}
