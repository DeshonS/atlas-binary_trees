#include "binary_trees.h"

/**
 * binary_tree_insert_left - opening of file
 * @parent: parent of new node ot be created
 * @value: value to input into new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;

new = malloc(sizeof(binary_tree_t));
if (parent == NULL)
{
return (NULL);
}
if (new == NULL)
{
return (NULL);
}
new->parent = parent;
new->right = NULL;
new->left = parent->left;
new->n = value;
if (parent->left != NULL)
{
parent->left->parent = new;
}
parent->left = new;
return (new);
}
