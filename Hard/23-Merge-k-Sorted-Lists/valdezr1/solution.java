/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        // Put all of the lists in a priority queue using a min-heap based on first value
        // Extract Heap
        // Extract first elem in list and add into new list
        // Insert list back into heap
        // Repeat till heap is empty
        
        // Analysis: O(nlog(k))
        // Build min heap out of the list of lists: O(k)
        // For number of total elements in list: O(n)
        //      Extract Heap: O(log(k))
        //      Extract first elem of list and add into new list: O(1)
        //      Insert list back into heap: O(log(k))
    }
}
