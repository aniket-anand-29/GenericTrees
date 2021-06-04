
int Num_Nodes(TreeNode<int> * root){
  if(root == NULL){
    return 0;
  }
  int ans = 1;
  for(int i = 0 ; i < root->children.size() ; i++){
    ans += Num_Nodes(root->children[i]) ;
  }
  return ans;
}
