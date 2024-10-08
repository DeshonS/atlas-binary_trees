#include "binary_trees.h"

/**
 * binary_tree_height - Opening of file
 * @tree: A pointer to the root node of the tree
 * Return: The height of the tree, or 0 if tree is NULL
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
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 * Return: The size of the tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise or if the tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, size, expected_size;

if (tree == NULL)
{
return (0);
}
height = binary_tree_height(tree);
size = binary_tree_size(tree);
expected_size = (1 << (height + 1)) - 1;
return (size == expected_size);
}
