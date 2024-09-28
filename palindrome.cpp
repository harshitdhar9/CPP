class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true; 
        }
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf = reverseList(slow);
        ListNode* firstHalf = head;
        ListNode* tempSecondHalf = secondHalf; 
        
        while (tempSecondHalf != nullptr) {
            if (firstHalf->val != tempSecondHalf->val) {
                return false; 
            }
            firstHalf = firstHalf->next;
            tempSecondHalf = tempSecondHalf->next;
        }
        return true; 
    }
};
