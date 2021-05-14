/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::reverseList(ListNode *A) {
  if (A == NULL)
    return A;
  ListNode *cur = A, *prev = NULL, *next = NULL;
  while (cur != NULL) {
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
  }

  return prev;
}
