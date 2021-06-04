//Maximum Data Node
TreeNode<int> * Max_Data_Node(TreeNode<int> * root){
    
    TreeNode<int>*max = root;
     for(int i = 0; i < root->children.size(); i++){
        TreeNode<int>* small = Max_Data_Node(root -> children[i]);
        if(max -> data < small -> data){
            max = small;
        }
    }
    return max;
}
