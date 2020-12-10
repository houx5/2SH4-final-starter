/* Question 1
 [C Programming]
 [30 Marks]
In this question, you are required to implement a linked list in C
The question has four parts, answer all of them in this same file*/
 
/*(a) [5 Marks] write structure Node that holds an integer value as well as a pointer to the next node*/
//Answer:
typedef struct node
{
    int data;
    struct node *next;
}Node;






/*(b) [5 Marks] Write structure SLL that represents the singly linked list and holds a pointer to the first node in the list.*/
//Answer:
typedef struct SList
{
    Node pHead;
}SList;







/*(c) [10 Marks] write function searchList, that takes as input two parameters: the head of a linked list "head" and the integer value to search for "target" and 
returns:
1 if the target was found in the list
0, otherwise*/
//Answer:
int searchList(SList* L, int target){
    Node* pCur = L->pHead;
    while (pCur) {
        if(pCur->data = target){
            return 1;
        }
        pCur = pCur->next;
    }
    return 0;

}



  
/*(d) [10 Marks] test your function in main by creating a list of 10 nodes and then call the searchList function to search for a certain value, make sure you check 
the correctness of the returned value from the function by comparing it against what you expect. */
//Answer:


int main(){
    SList *head;
    head = NULL;
    int i = 0;

    SList node *p= head;
    for(i = 0; i< 10;i++){

        q=(struct node*)malloc(sizeof(struct node))
        q->data = i;
        q->next = NULL;
        p->next = q;
        p = p->next;

    }
    int a;
    a = searchList(head,5);

    printf('%d',a);	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
