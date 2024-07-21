#include <stdio.h>

int max_node = 15;
char tree[] = {'\0', 'D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};

int get_right_child(int index) {
    int right_child_index = (2 * index) + 1;
    if (index <= max_node && tree[index] != '\0' && right_child_index <= max_node) {
        return right_child_index;
    }
    return -1;
}

int get_left_child(int index) {
    int left_child_index = 2 * index;
    if (index <= max_node && tree[index] != '\0' && left_child_index <= max_node) {
        return left_child_index;
    }
    return -1;
}

void preorder(int index) {
    if (index <= max_node && tree[index] != '\0') {
        printf(" %c", tree[index]);
        preorder(get_left_child(index));
        preorder(get_right_child(index));
    }
}

void postorder(int index) {
    if (index <= max_node && tree[index] != '\0') {
        postorder(get_left_child(index));
        postorder(get_right_child(index));
        printf(" %c", tree[index]);
    }
}

void inorder(int index) {
    if (index <= max_node && tree[index] != '\0') {
        inorder(get_left_child(index));
        printf(" %c", tree[index]);
        inorder(get_right_child(index));
    }
}

int main() {
    printf("Preorder:\n");
    preorder(1);
    printf("\nPostorder:\n");
    postorder(1);
    printf("\nInorder:\n");
    inorder(1);
    printf("\n");

    return 0;
}

/tmp/vEggmjjJEN.o
Preorder:
 D A E G Q B F R V T J L
Postorder:
 G Q E B A V R J L T F D
Inorder:
 G E Q A B D V R F J T L


=== Code Execution Successful ===