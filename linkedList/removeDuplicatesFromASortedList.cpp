/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *Solution::deleteDuplicates(ListNode *A) {
  ListNode *head = A;
  ListNode *rep = head;
  if (head == NULL || head->next == NULL)
    return head;

  while (rep != NULL) {
    ListNode *tmp = rep;
    while (tmp->next != NULL && tmp->val == tmp->next->val)
      tmp = tmp->next;
    tmp = tmp->next;
    rep->next = tmp;
    rep = rep->next;
  }
  return head;
}