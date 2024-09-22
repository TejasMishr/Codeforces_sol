

void zigzagLevelOrder(Node* root)
{
    if (root == NULL)
        return ;
 
    queue<Node*> q;
    q.push(root);
    bool flag = false;
 
    while (!q.empty())
    {
        int size = q.size();
        vector<int> v(size);
        for (int i = 0; i < size; i++)
        {
            Node* temp = q.front();
            q.pop();
            int index = flag ? i : (size - 1 - i);
            v[index] = temp->data;
 
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        flag = !flag;
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
}


