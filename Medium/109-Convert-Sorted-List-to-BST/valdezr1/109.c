// 109. Convert Sorted List to Binary Search Tree

TreeNode* convertSortedListToBST(LinkedList* list) {
	Node* midListNode = list.getMiddle();
	TreeNode* root = new TreeNode(midListNode.getData()); 
	createBSTHelper(list.subList(list.getHead(), midListNode), root -> left);
	createBSTHelper(list.subList(midListNode.getNext(), list.getTail), root -> right);
}

void createBSTHelper(LinkedList list, TreeNode* parentTreeNodePtr) {
	Node* midListNode = list.getMiddle();
	TreeNode* subTreeRoot = new TreeNode(midListNode.getData());
	parentTreeNodePtr = subTreeRoot;
	if (list.getSize() != 1) {
		createBSTHelper(list.subList(list.getHead(), midListNode), root -> left);
		createBSTHelper(list.subList(midListNode.getNext(), list.getTail()), root -> right);
	}
}
