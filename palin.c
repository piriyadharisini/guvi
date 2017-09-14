bool isPalindrome(struct Node *head)
{
    struct Node *slow_ptr = head, *fast_ptr = head;
    struct Node *second_half, *prev_of_slow_ptr = head;
    struct Node *midnode = NULL; 
    bool res = true;
 
    if (head!=NULL && head->next!=NULL)
    {
        
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
            fast_ptr = fast_ptr->next->next;
 
            prev_of_slow_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
 
 
        
        if (fast_ptr != NULL)
        {
            midnode = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
 
        
        second_half = slow_ptr;
        prev_of_slow_ptr->next = NULL; 
        reverse(&second_half);  
        res = compareLists(head, second_half); 
 
        
         reverse(&second_half); 
 
          
         if (midnode != NULL) 
         {
            prev_of_slow_ptr->next = midnode;
            midnode->next = second_half;
         }
         else  prev_of_slow_ptr->next = second_half;
    }
    return res;
}