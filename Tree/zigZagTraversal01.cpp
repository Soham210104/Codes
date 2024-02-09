class Solution {
public:
    vector<int> zigZagTraversal(Node* root) {
        if (root == nullptr) {
            return {};
        }

        vector<int> result;
        queue<Node*> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> currentLevel;

            for (int i = 0; i < size; ++i) {
                Node* current = q.front();
                q.pop();

                if (leftToRight) {
                    currentLevel.push_back(current->data);
                } else {
                    currentLevel.insert(currentLevel.begin(), current->data);
                }

                if (current->left) {
                    q.push(current->left);
                }

                if (current->right) {
                    q.push(current->right);
                }
            }

            result.insert(result.end(), currentLevel.begin(), currentLevel.end());
            leftToRight = !leftToRight;
        }

        return result;
    }
};