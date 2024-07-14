class Solution {
public:
    vector<int> zigZagTraversal(Node* root) {
        if (root == nullptr) {
            return {};
        }

        vector<int> result;
        queue<Node*> q;
        q.push(root);
        bool L2R = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> level(size);

            for (int i = 0; i < size; ++i) {
                Node* node = q.front();
                q.pop();
                
                
               int index;
                if (L2R) {
                    index = i;
                } else {
                    index = size - 1 - i;
                }
                level[index] = node->data;

                if (node->left != nullptr) {
                    q.push(node->left);
                }
                if (node->right != nullptr) {
                    q.push(node->right);
                }
            }

            result.insert(result.end(), level.begin(), level.end());
            L2R = !L2R; 
        }

        return result;
    }
};
