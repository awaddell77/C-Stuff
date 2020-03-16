

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
struct Node {
    struct Node *next;
    void* data;
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
void delete_index(struct Node *node, int index){
    struct Node* temp = node;
    struct Node* old; struct Node* next_node;
    
    int cnt = 0;
    while (temp->next != NULL){
        
        if (cnt==index){
            old->next = temp->next;
            free(temp);
        }
        cnt++;
        old = temp;
        temp = temp->next;
    }
    
}
struct Node* make_head_node(void* data){
    struct Node *head = malloc(sizeof(struct Node));
    head->data = data;
    return head;
}
int lst_length(struct Node* head){
    struct Node *temp = head;
    int cnt = 0;
    while (temp != NULL){ 
        cnt++;
        temp = temp->next;
       
    }
    return cnt;
    
}
struct Node* get_node_index(struct Node* head, int index){
    //returns given index
    //does not delete index 0 unless it is the only node in the list
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
void clear_lst(struct Node *head){
    struct Node *temp = head;
    struct Node* old;
    while (temp != NULL){ 
        old = temp;
        temp = temp->next;
        free(old);
       
       
    }
}
int main(int argc, char** argv) {
    struct Node tst; struct Node* member = malloc(sizeof(struct Node));
    struct Node* head = make_head_node(500);
    append_to_lst(head, 200);append_to_lst(head, 150);
    tst.data = 5; 
    
    member->data = 10;
    tst.next = member;
    printf("Node data is: %d\n", tst.data);
    printf("Member data is: %d\n", member->data);
    int res = tst.next->data; //if it is a pointer then use ->  otherwise use . 
    printf("Member data is: %d\n",res);
    
    append_to_lst(&tst, 15);
    //prt_lst(&tst);//works
    prt_lst(head);//works
    //clear_lst(head);//works
    int lst_len = lst_length(head);
    printf("List has %d nodes. Printing to check\n", lst_len);
    prt_lst(head);
    printf("Now deleting index 1 from head\n");

    delete_index(head, 1);
    lst_len = lst_length(head);
    printf("List now has %d nodes. Printing to check\n", lst_len);
    
    prt_lst(head);
    
    //clear_lst()
    
    
    //struct Node *tstdata = tst.next;
   //printf("Next data is: %d (should be 10)", );

    return (EXIT_SUCCESS);
}

