#include <stdio.h>
#include <malloc.h>

typedef struct btree {
	char value;
	struct btree *left;
	struct btree *right;
} BTREE;

typedef struct tree {
	char value;
	struct tree *childs[10];
	int count;
}TREE;

void tree_insert(TREE *childTree, TREE *parentTree, int index) {
	(*parentTree).childs[index] = childTree;
}

void main(void) {

	TREE mainTree, childTree;
	mainTree.value = 'A';
	mainTree.count = 5;

	childTree.value = 'B';
	childTree.count = 1;

	tree_insert(&childTree, &mainTree, 0);

}

