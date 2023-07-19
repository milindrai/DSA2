// Diagonal clockwise(upperLeft to LowerRight) and anticlock(upperRight to LowerLeft)wise Order Traversal BFS
// Iterative: // NOTE : ONLY BFS SOLUTION likE dijkstra since dfs will take onlogn.No required to read it.
Clockwise:
void diagonal(Node* root){
    vector<vector<int>> ans;
    if(!root)return;
    queue<Node*> q;
    q.push(root);
    while(q.size()){
        int size = q.size();
        vector<int> temp;
        while(size--){
            Node* c = q.front();
            q.pop();
            while(c){
                temp.push_back(c->data);
                if(c->left)q.push(c->left);  //if(temp->right)q.push(temp->right);  For anticlockwise
                c = c->right;                //temp=temp->left;                     For anticlockwise
            }
        }
        ans.push_back(temp);
    }
}
