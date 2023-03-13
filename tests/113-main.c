#include <stdlib.h>
#include <stdio.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code on failure
 */
int main(void)
{
	bst_t *tree;
	int array[] = {
		79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
		20, 22, 98, 1, 62, 95
	};
	size_t n = sizeof(array) / sizeof(array[0]);
	bst_t *node;

	tree = array_to_bst(array, n);
	if (!tree)
		return (1);
	binary_tree_print(tree);
	node = bst_search(tree, 32);
	printf("Found: %d\n", node->n);
	binary_tree_print(node);
	node = bst_search(tree, 512);
	printf("Node should be nil -> %p\n", (void *)node);
	return (0);
}
