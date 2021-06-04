
long long int Sum_Nodes(TreeNode<int> * root){
  long long int sum = root -> data;
  for(int i = 0 ; i < root->children.size(); i++){
    sum += Sum_Nodes(root->children[i]);
  }
  return sum;
}
