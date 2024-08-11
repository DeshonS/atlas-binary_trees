#include "binary_trees.h"

/**
 * binary_tree_insert_right - opening of file
 * @parent: parent of new node ot be created
 * @value: value to input into new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (parent == NULL)
{
return (NULL);
}
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
{
return (NULL);
}
new->parent = parent;
new->left = NULL;
new->right = parent->right;
new->n = value;
if (parent->right != NULL)
{
parent->right->parent = new;
}
parent->right = new;
return (new);
}
