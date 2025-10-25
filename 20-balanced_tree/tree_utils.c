#include <stdio.h>
#include <stdlib.h>
#include "tree_utils.h"

static int compare_ints(const void *a, const void *b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;
    return (int_a > int_b) - (int_a < int_b);
}


static TreeNode* build_balanced_bst_helper(int *arr, int start, int end) {
    if (start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;
    TreeNode *node = create_node(arr[mid]);

    node->left = build_balanced_bst_helper(arr, start, mid - 1);
    node->right = build_balanced_bst_helper(arr, mid + 1, end);

    return node;
}


TreeNode* build_balanced_bst(int *values, int n) {
    if (n <= 0) {
        return NULL;
    }

   
    qsort(values, n, sizeof(int), compare_ints);

    
    return build_balanced_bst_helper(values, 0, n - 1);
}
