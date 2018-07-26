
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
// RECURSIVE SOLUTION
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> answer = new ArrayList<>();
        inorderHelper(root, answer);
        return answer; // in java array lists are passed by reference, good to know
    }

    private void inorderHelper(TreeNode root, List<Integer> answer) {
        if (root != null) {
            if(root.left != null)
                inorderHelper(root.left, answer);
            System.out.print(root.val);
            answer.add(root.val);
            if(root.right != null)
                inorderHelper(root.right, answer);
        }
    }
}


// ITERATIVE SOLUTION
