

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
struct Node {
    struct Node *next;
    int data;
};
void append_to_lst(struct Node *node, int data){
    
    //Node.data = data;
    struct Node *temp = node;
    while (temp->next != NULL){
        if (temp->next == NULL){
            break;
        }
        temp = temp->next;
        
    }
    struct Node *n_node = malloc(sizeof(struct Node));
    n_node->data = data;
    n_node->next = NULL;
    temp->next = n_node;
    
    
    
}
struct Node* get_node_index(struct Node* head, int index){
    //returns given index
    struct Node* temp = head;
    int cnt = 0;
    while (temp->next != NULL){
        if (cnt == index){
            return temp;
        }
        else{
            cnt++;
            temp = temp->next;
        }
        //errors? what if the number is bigger than the list?
    }
    
}
void prt_lst(struct Node *node){
    struct Node *temp = node;
    int cnt = 1;
    while (temp != NULL){
        
        printf("Node #%d data: %d\n", cnt, temp->data);
        cnt++;
        temp = temp->next;
    }
};
int find_value(struct Node *head, int val){
    
}
int main(int argc, char** argv) {
    struct Node tst; struct Node* member = malloc(sizeof(struct Node));
    tst.data = 5; 
    member->data = 10;
    tst.next = member;
    printf("Node data is: %d\n", tst.data);
    printf("Member data is: %d\n", member->data);
    int res = tst.next->data; //if it is a pointer then use ->  otherwise use . 
    printf("Member data is: %d\n",res);
    append_to_lst(&tst, 15);
    prt_lst(&tst);
    
    
    
    //struct Node *tstdata = tst.next;
   //printf("Next data is: %d (should be 10)", );

    return (EXIT_SUCCESS);
}

