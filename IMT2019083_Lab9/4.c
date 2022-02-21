#include <stdio.h>
#include <stdlib.h>

//STRUCTURE FOR LINKED LIST
struct Node{
    int val;
    struct Node * ref;
};

//CREATE NODE - returns head ptr
struct Node * CREATE(int n){
    struct Node * head = NULL;
    struct Node * prev_node = NULL;

    for(int i = 0; i < n; i++){
        struct Node * added_node = (struct Node *)malloc(sizeof(struct Node));
        
        int value;
        scanf("%d", &value);

        //new node with null pointer as tail
        added_node->val = value;
        added_node->ref = NULL;

        //assigning ref of prev struct var the address of this node
        if (i == 0){
            head = added_node;
            prev_node = added_node;
        }

        else {
            prev_node->ref = added_node;  
            prev_node = added_node; 
        } 
        
    }
    
    return head;
    
}


//PRINT LIST
void PRINT(struct Node * node){
    while (node != NULL){
        printf("%d-->", node->val);
        node = node->ref;
    }
     printf("NULL\n");   
}


//DELETE ALL ODD ELEMENTS
void ODD_DEL(struct Node * head){

    if (head->ref == NULL) {
            return;}

    struct Node * temp = head; 
    //temp1 will point to second last node from head
    struct Node * prev = head;

    while (temp != NULL) {
        if (temp->val % 2 != 0){
            //if temp is not pointing to the last node
            if (temp->ref != NULL){
                temp->val = temp->ref->val;
                temp->ref = temp->ref->ref;
                    }
                
            //last node satisifies the condition - prev node ref must point to NULL
            else{
                //if all prev elements have been odd
                if (temp == head) head = NULL;
                //else set the ref in prev node to NULL(prev node becomes last node)
                prev->ref = NULL; 
                return;  
                }      
            }
        //temp jumps a position if no odd value
        else {
            prev = temp;
            temp = temp->ref;}
         }
    
}

//MAIN
int main(){
    //no. of input ints ->  IF N == 0, PRINT ONLY NULL
    int n;
    scanf("%d", &n);

     //CREATE - linked list with head ptr declared abv
    //head collects the head ptr of linked list
    struct Node * head = CREATE(n);

    //print in given format - PRINT func
    PRINT(head);

    //delete odd-valued terms - ODD_DEL func (except for size = 1, where evaluation is done)
    ODD_DEL(head);
    
    //this line compensates the inability of ODD_Del func to return null ptrs
    if (head->ref == NULL && head->val % 2 != 0) head = NULL;

    //print in given format - PRINT func
    PRINT(head);

    return 0;
} 
    
   

