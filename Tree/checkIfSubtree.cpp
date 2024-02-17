class Solution
{
public:
    // Function to check if S is a subtree of tree T.
    bool isSubTree(Node* T, Node* S)
    {
        if (S == NULL)
            return true;

        if (T == NULL)
            return false;

        if (areIdentical(T, S))
            return true;

        return isSubTree(T->left, S) || isSubTree(T->right, S);
    }

    // Helper function to check if two trees are identical
    bool areIdentical(Node* T, Node* S)
    {
        if (T == NULL && S == NULL)
            return true;

        if (T == NULL || S == NULL)
            return false;

        return (T->data == S->data) && areIdentical(T->left, S->left) && areIdentical(T->right, S->right);
    }
};
