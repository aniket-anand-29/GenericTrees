TreeNode<int> * takeInput(){
  int data;
  cout << "Enter Root data:" << endl;
  cin >> data;
  TreeNode<int> * root = new TreeNode<int>(data);

  queue<TreeNode<int>*> pendingNodes;

  pendingNodes.push(root);

  while(pendingNodes.size() != 0){
    TreeNode<int> * front = pendingNodes.front();
    pendingNodes.pop();
    
    cout << " Enter number of children of " << front->data << endl;
    int numChild;
    cin >> numChild;

    for(int i = 0 ; i < numChild ; i++){
      int childData;
      cout << "Enter " << i << "ith child of " << front -> data << endl;
      cin >> childData;
      TreeNode<int> * child = new TreeNode<int>(childData);
      front -> children.push_back(child);
      pendingNodes.push(child);
    }
  }
  return root;
}
