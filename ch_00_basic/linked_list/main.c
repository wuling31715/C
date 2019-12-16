#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *create_list(int *array, int length)
{
    NODE *head, *current, *previous;
    for(int i = 0; i < length; i++)
    {
        current = (NODE *) malloc(sizeof(NODE));
        current->data = array[i];
        if (i == 0) {
            head = current;
        } else
        {
            previous->next = current;            
        }
        current->next = NULL;
        previous = current;        
    }
    return head;
}

void print_list(NODE *head)
{
    NODE *node = head;
    if (head == NULL) {
        printf("list is empty.");
    } else
    {
        while(node != NULL){
            printf("%d\n", node->data);
            node = node->next;
        }
    }
}

void free_list(NODE *head)
{
    NODE *current, *tempt;
    current = head;
    while(current != NULL){
        tempt = current;
        current = current->next;
        free(tempt);
    }
}

NODE *search_node(NODE *head, int target)
{
    NODE *node = head;
    while(node != NULL){
        if (node->data == target) {
            return node;
        } else
        {
            node = node->next;
        }
    }
    return NULL;        
}

void insert_node(NODE *node, int target)
{
    NODE *new;
    new = (NODE *) malloc(sizeof(NODE));
    new->data = target;
    new->next = node->next;
    node->next = new;
}

NODE * delete_node(NODE *head, NODE *target)
{
    NODE *previous = head;
    if (head == NULL) {
        printf("list is empty.");
        return NULL;
    } else
    {
        while(previous->next != target){
            previous = previous->next;            
        }
        previous->next = target->next;        
    }
    free(target);
    return head;
}

int main(void)
{
    NODE *head, *target;
    int array[] = {1, 2, 3, 4, 5};
    head = create_list(array, sizeof(array) / sizeof(array[0]));
    print_list(head);    
    int x, position, new;
    while(x != 0){
        printf("x = 0: 結束程式\n");
        printf("x = 1: 新增節點\n");
        printf("x = 2: 刪除節點\n");
        printf("x = ");
        scanf("%d", &x);
        switch (x)
        {
            case 0:            
                break;
            case 1:                
                printf("target new = ");
                scanf("%d %d", &position, &new);
                target = search_node(head, position);                
                insert_node(target, new);
                print_list(head);
                break;
            case 2:
                printf("target = ");
                scanf("%d", &position);
                target = search_node(head, position);
                head = delete_node(head, target);
                print_list(head);
                break;
            default:
                printf("再試一次\n");
                break;
        }
    }    
    return 0;
}
