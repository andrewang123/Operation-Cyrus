/*
	Psuedo code
		make a set
		if not seen add to set
		else remove it

	*note didnt realize that the list was sorted
	Big O
	time complexity O(n)
	space complexity O(n)

	reflection:
		could have not used a set, rather just iterated until you saw the next value. Oops :P


*/ 


 public class ListNode {
      int val;
      ListNode next;
      ListNode(int x) { val = x; }
  }
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        if (head == null) // if the list is empty just return head
            return head;
        else {
            Set<Integer> values = new HashSet<Integer>();
            ListNode cur = head; // make a copy 
            ListNode follow = head;
            if(cur.next != null) {
                values.add(cur.val);
                cur = cur.next;   
            }
            while(cur != null) {
                System.out.println(cur.val);
                if(values.contains(cur.val)) // is duplicate
                {
                    follow.next = cur.next; // delete the value
                    cur = follow.next;
                } else { // seen it for the first time
                    values.add(cur.val);
                    cur = cur.next; // go to the next item
                    follow = follow.next; 
                }
              
            }
            
        }
        return head;
    }
}
