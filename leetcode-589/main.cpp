//
//  main.cpp
//  leetcode-589
//
//  Created by 江沛澤 on 2018/11/16.
//  Copyright © 2018 江沛澤. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;
    
    Node() {}
    
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
    vector<int> ans;
public:
    vector<int> preorder(Node* root) {
        if(root==NULL)
            return ans;
        ans.push_back(root->val);
        for(Node *node: root->children)
        {
            preorder(node);
        }
        return ans;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    
    return 0;
}
