// Christopher R. Fischer
// UCF Computer Science
// L33tcode problem Range Sum of BST
// Submission #226603520


#include <stdio.h>
#include <stdlib.h>

int rangeSumBST(struct TreeNode* root, int L, int R){
	int ret = 0;
	if(root == NULL)
		return 0;
	if(root->val <= R && root->val >= L)
		ret+=root->val;
	// If the value is lesser then our lowest allowed value, no point
	// traversing the left subtree.	
	if(root->val > L)
		ret+=rangeSumBST(root->left, L, R);
	// If the value is higher then our highest allowed value, no point
	// in traversing the right subtree.
	if(root->val < R)
		ret+=rangeSumBST(root->right, L, R);

	return ret;

}
