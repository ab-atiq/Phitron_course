#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

typedef struct dNode {
    int data;
    struct dNode *next;
    struct dNode *prev;
} dNode;

node *head = NULL;
dNode *dHead = NULL;
dNode *dTail = NULL;

node *create_node(int data) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

dNode *create_dNode(int data) {
    dNode *new_dNode = (dNode *)malloc(sizeof(dNode));
    new_dNode->data = data;
    new_dNode->next = NULL;
    new_dNode->prev = NULL;
    return new_dNode;
}

void insert_at_start(int data) {
    node *new_node = create_node(data);
    new_node->next = head;
    head = new_node;
}

void insert_at_end(int data) {
    node *new_node = create_node(data);
    if (head == NULL) {
        head = new_node;
    } else {
        node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void insert_in_sorted(int data) {
    node *new_node = create_node(data);
    if (head == NULL) {
        head = new_node;
    } else {
        node *current = head;
        while (current->next != NULL && current->next->data < data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void insert_at_index(int data, int index) {
    node *new_node = create_node(data);
    if (index == 0) {
        insert_at_start(data);
    } else {
        node *current = head;
        int i = 0;
        while (i < index - 1) {
            if (current == NULL || current->next == NULL) {
                printf("Index out of bounds\n");
                return;
            }
            current = current->next;
            i++;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void insert_after_item(int data, int item) {
    node *new_node = create_node(data);
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else {
        node *current = head;
        while (current->next != NULL && current->data != item) {
            current = current->next;
        }
        if (current->data == item) {
            new_node->next = current->next;
            current->next = new_node;
        } else {
            printf("Item not found\n");
        }
    }
}

void traverse() {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else {
        node *current = head;
        while (current->next != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
    }
}

int get_length() {
    int length = 0;
    if (head == NULL) {
        return length;
    } else {
        node *current = head;
        while (current->next != NULL) {
            current = current->next;
            length++;
        }
    }
    return length;
}

int item_occurence(int item) {
    if (head == NULL) {
        printf("The linked list is empty\n");
        return 0;
    } else {
        node *current = head;
        int count = 0;
        while (current->next != NULL) {
            if (current->data == item) {
                count++;
            }
            current = current->next;
        }
        return count;
    }
}

int item_index(int item) {
    if (head == NULL) {
        printf("The linked list is empty\n");
        return -1;
    } else {
        node *current = head;
        int index = 0;
        while (current->next != NULL) {
            if (current->data == item) {
                return index;
            }
            current = current->next;
            index++;
        }
        return -1;
    }
}

void search(int item) {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else {
        node *current = head;
        while (current->next != NULL) {
            if (current->data == item) {
                printf("Element is found\n");
                return;
            }
            current = current->next;
        }
    }
    printf("Not found\n");
}

void delete_from_start() {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else {
        head = head->next;
    }
}

void delete_from_end() {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else if (head->next == NULL) {
        head = NULL;
    } else {
        node *current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        current->next = NULL;
    }
}

void delete_value(int item) {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else if (head->data == item) {
        head = head->next;
    } else {
        node *current = head;
        while (current->next->data != item) {
            current = current->next;
        }
        current->next = current->next->next;
    }
}

void delete_from_index(int index) {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else if (index == 0) {
        delete_from_start();
    } else {
        node *current = head;
        int i = 0;
        while (i < index - 1) {
            if (current == NULL || current->next == NULL) {
                printf("Index out of bounds\n");
                return;
            }
            current = current->next;
            i++;
        }
        current->next = current->next->next;
    }
}

// Doubly linked list
void insert_at_startDoubly(int data) {
    dNode *new_dNode = create_dNode(data);
    if (dHead == NULL) {
        dHead = new_dNode;
        dTail = new_dNode;
    } else {
        new_dNode->next = dHead;
        dHead->prev = new_dNode;
        dHead = new_dNode;
    }
}

void insert_at_endDoubly(int data) {
    dNode *new_dNode = create_dNode(data);
    if (dHead == NULL) {
        dHead = new_dNode;
        dTail = new_dNode;
    } else {
        dTail->next = new_dNode;
        new_dNode->prev = dTail;
        dTail = new_dNode;
    }
}

void insert_in_sortedDoubly(int data) {
    dNode *new_dNode = create_dNode(data);
    if (dHead == NULL) {
        dHead = new_dNode;
        dTail = new_dNode;
    } else {
        dNode *current = dHead;
        while (current->next != NULL && current->next->data < data) {
            current = current->next;
        }
        new_dNode->next = current->next;
        current->next = new_dNode;
        new_dNode->prev = current;
        if (new_dNode->next != NULL) {
            new_dNode->next->prev = new_dNode;
        } else {
            dTail = new_dNode;
        }
    }
}

void insert_at_indexDoubly(int data, int index) {
    dNode *new_dNode = create_dNode(data);
    if (index == 0) {
        insert_at_startDoubly(data);
    } else {
        dNode *current = dHead;
        int i = 0;
        while (i < index - 1) {
            if (current == NULL || current->next == NULL) {
                printf("Index out of bounds\n");
                return;
            }
            current = current->next;
            i++;
        }
        new_dNode->next = current->next;
        current->next = new_dNode;
        new_dNode->prev = current;
        if (new_dNode->next != NULL) {
            new_dNode->next->prev = new_dNode;
        } else {
            dTail = new_dNode;
        }
    }
}

void insert_after_itemDoubly(int data, int item) {
    dNode *new_dNode = create_dNode(data);
    if (dHead == NULL) {
        printf("The linked list is empty\n");
    } else {
        dNode *current = dHead;
        while (current->next != NULL && current->data != item) {
            current = current->next;
        }
        if (current->data == item) {
            new_dNode->next = current->next;
            new_dNode->prev = current;
            current->next = new_dNode;
            if (new_dNode->next != NULL) {
                new_dNode->next->prev = new_dNode;
            } else {
                dTail = new_dNode;
            }
        } else {
            printf("Item not found\n");
        }
    }
}

void traverseDoubly() {
    if (dHead == NULL) {
        printf("The linked list is empty\n");
    } else {
        dNode *current = dHead;
        while (current->next != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
    }
}

int get_lengthDoubly() {
    if (dHead == NULL) {
        return 0;
    } else {
        dNode *current = dHead;
        int count = 0;
        while (current->next != NULL) {
            current = current->next;
            count++;
        }
        return count;
    }
}

int item_occurrenceDoubly(int item) {
    if (dHead == NULL) {
        printf("The linked list is empty\n");
        return 0;
    } else {
        dNode *current = dHead;
        int count = 0;
        while (current->next != NULL) {
            if (current->data == item) {
                count++;
            }
            current = current->next;
        }
        return count;
    }
}

int item_at_indexDoubly(int index) {
    if (dHead == NULL) {
        printf("The linked list is empty\n");
        return 0;
    } else {
        dNode *current = dHead;
        int i = 0;
        while (i < index) {
            if (current == NULL || current->next == NULL) {
                printf("Index out of bounds\n");
                return 0;
            }
            current = current->next;
            i++;
        }
        return current->data;
    }
}

void delete_from_startDoubly() {
    if (dHead == NULL) {
        printf("The linked list is empty\n");
    } else if (dHead->next == NULL) {
        dHead = NULL;
        dTail = NULL;
    } else {
        dHead = dHead->next;
        dHead->prev = NULL;
    }
}

void delete_from_endDoubly() {
    if (dHead == NULL) {
        printf("The linked list is empty\n");
    } else if (dHead->next == NULL) {
        dHead = NULL;
        dTail = NULL;
    } else {
        dTail = dTail->prev;
        dTail->next = NULL;
    }
}

void delete_valueDoubly(int item) {
    if (dHead == NULL) {
        printf("The linked list is empty\n");
    } else if (dHead->data == item) {
        dHead = dHead->next;
    } else {
        dNode *current = dHead;
        while (current->next->data != item) {
            current = current->next;
        }
        current->next = current->next->next;
        if (current->next != NULL) {
            current->next->prev = current;
        } else {
            dTail = current;
        }
    }
}

void delete_from_indexDoubly(int index) {
    if (dHead == NULL) {
        printf("The linked list is empty\n");
    } else if (index == 0) {
        delete_from_startDoubly();
    } else {
        dNode *current = dHead;
        int i = 0;
        while (i < index - 1) {
            if (current == NULL || current->next == NULL) {
                printf("Index out of bounds\n");
                return;
            }
            current = current->next;
            i++;
        }
        current->next = current->next->next;
        if (current->next != NULL) {
            current->next->prev = current;
        } else {
            dTail = current;
        }
    }
}

void delete_after_itemDoubly(int item) {
    if (dHead == NULL) {
        printf("The linked list is empty\n");
    } else {
        dNode *current = dHead;
        while (current->next != NULL && current->data != item) {
            current = current->next;
        }
        if (current->data == item) {
            current->next = current->next->next;
            if (current->next != NULL) {
                current->next->prev = current;
            } else {
                dTail = current;
            }
        } else {
            printf("Item not found\n");
        }
    }
}

int *convert_to_arr(node *head) {
    int *arr = (int *)malloc(sizeof(int) * get_length(head));
    int i = 0;
    while (head != NULL) {
        arr[i] = head->data;
        head = head->next;
        i++;
    }
    return arr;
}

int *convert_to_arrDoubly(dNode *head) {
    int *arr = (int *)malloc(sizeof(int) * get_lengthDoubly(head));
    int i = 0;
    while (head != NULL) {
        arr[i] = head->data;
        head = head->next;
        i++;
    }
    return arr;
}

int match_array(int arr1[], int arr2[], int n) {
    int i = 0;
    while (i < n) {
        if (arr1[i] != arr2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    // test insert at start
    insert_at_start(1);
    insert_at_start(2);
    insert_at_start(3);
    match_array(convert_to_arr(head), (int[]){3, 2, 1}, 3) == 1 ? printf("Test insert_at_start passed\n") : printf("Test insert_at_start failed\n");
    head = NULL;
    // test insert at end
    insert_at_end(1);
    insert_at_end(2);
    insert_at_end(3);
    match_array(convert_to_arr(head), (int[]){1, 2, 3}, 3) == 1 ? printf("Test insert_at_end passed\n") : printf("Test insert_at_end failed\n");
    head = NULL;
    // test insert at index
    insert_at_index(1, 0);
    insert_at_index(2, 1);
    insert_at_index(3, 1);
    match_array(convert_to_arr(head), (int[]){1, 3, 2}, 3) == 1 ? printf("Test insert_at_index passed\n") : printf("Test insert_at_index failed\n");
    head = NULL;
    // test insert after item
    insert_at_start(1);
    insert_after_item(2, 1);
    insert_after_item(3, 1);
    match_array(convert_to_arr(head), (int[]){1, 3, 2}, 3) == 1 ? printf("Test insert_after_item passed\n") : printf("Test insert_after_item failed\n");
    head = NULL;
    // test delete from start
    insert_at_end(1);
    insert_at_end(2);
    insert_at_end(3);
    delete_from_start();
    match_array(convert_to_arr(head), (int[]){2, 3}, 2) == 1 ? printf("Test delete_from_start passed\n") : printf("Test delete_from_start failed\n");
    head = NULL;
    // test delete from end
    insert_at_end(1);
    insert_at_end(2);
    insert_at_end(3);
    delete_from_end();
    match_array(convert_to_arr(head), (int[]){1, 2}, 2) == 1 ? printf("Test delete_from_end passed\n") : printf("Test delete_from_end failed\n");
    head = NULL;
    // test delete value
    insert_at_end(1);
    insert_at_end(2);
    insert_at_end(3);
    delete_value(2);
    match_array(convert_to_arr(head), (int[]){1, 3}, 2) == 1 ? printf("Test delete_value passed\n") : printf("Test delete_value failed\n");
    head = NULL;
    // test delete from index
    insert_at_end(1);
    insert_at_end(2);
    insert_at_end(3);
    delete_from_index(1);
    match_array(convert_to_arr(head), (int[]){1, 3}, 2) == 1 ? printf("Test delete_from_index passed\n") : printf("Test delete_from_index failed\n");
    head = NULL;
    // test insert at start doubly
    insert_at_startDoubly(1);
    insert_at_startDoubly(2);
    insert_at_startDoubly(3);
    match_array(convert_to_arrDoubly(dHead), (int[]){3, 2, 1}, 3) == 1 ? printf("Test insert_at_startDoubly passed\n") : printf("Test insert_at_startDoubly failed\n");
    dHead = NULL;
    dTail = NULL;
    // test insert at end doubly
    insert_at_endDoubly(1);
    insert_at_endDoubly(2);
    insert_at_endDoubly(3);
    match_array(convert_to_arrDoubly(dHead), (int[]){1, 2, 3}, 3) == 1 ? printf("Test insert_at_endDoubly passed\n") : printf("Test insert_at_endDoubly failed\n");
    dHead = NULL;
    dTail = NULL;
    // test insert at index doubly
    insert_at_indexDoubly(1, 0);
    insert_at_indexDoubly(2, 1);
    insert_at_indexDoubly(3, 1);
    match_array(convert_to_arrDoubly(dHead), (int[]){1, 3, 2}, 3) == 1 ? printf("Test insert_at_indexDoubly passed\n") : printf("Test insert_at_indexDoubly failed\n");
    dHead = NULL;
    dTail = NULL;
    // test insert after item doubly
    insert_at_startDoubly(1);
    insert_after_itemDoubly(2, 1);
    insert_after_itemDoubly(3, 1);
    match_array(convert_to_arrDoubly(dHead), (int[]){1, 3, 2}, 3) == 1 ? printf("Test insert_after_itemDoubly passed\n") : printf("Test insert_after_itemDoubly failed\n");
    dHead = NULL;
    dTail = NULL;
    // test delete from start doubly
    insert_at_endDoubly(1);
    insert_at_endDoubly(2);
    insert_at_endDoubly(3);
    delete_from_startDoubly();
    match_array(convert_to_arrDoubly(dHead), (int[]){2, 3}, 2) == 1 ? printf("Test delete_from_startDoubly passed\n") : printf("Test delete_from_startDoubly failed\n");
    dHead = NULL;
    dTail = NULL;
    return 0;
}
