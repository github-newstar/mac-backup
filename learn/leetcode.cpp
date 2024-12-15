#include <algorithm>
#include <climits>
#include <cstdint>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* l, TreeNode* r) : val(x), left(l), right(r) {}
};
// class Node {
//    public:
//     int val;
//     vector<Node*> children;
//     Node() = default;
//     Node(int val) { this->val = val; }
//     Node(int _val, vector<Node*> _children) {
//         val = _val;
//         children = _children;
//     }
class Node {
   public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class solution {
    int nextg(vector<int>& height) {
        height.emplace_back(0);
        stack<int> sta;
        sta.push(0);
        int ans = 0;
        int result;
        for (int i = 1; i < height.size(); ++i) {
            while (!sta.empty() && height[i] < height[sta.top()]) {
                int mid = sta.top();
                sta.pop();
                if (!sta.empty()) {
                    int w = i - sta.top() - 1;
                    int h = height[mid];
                    result = w * h;
                    ans = max(ans, result);
                }
            }
        }
        return ans;
    }
};

int main() {}
