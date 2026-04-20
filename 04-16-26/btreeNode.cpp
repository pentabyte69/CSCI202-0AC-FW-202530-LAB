/* Program name: btreeNode.cpp
* Author: Mohamad Suhail
* Date last updated: 4/20/2026
* Purpose: Define a node structure for a B-tree. The node stores up to
* M - 1 keys and M child pointers, where M is the order of the B-tree.
*/

#include <iostream>
#include <string>

template <typename Type, int M>
struct bTreeNode
{
    Type keys[M - 1];                 // Stores up to M - 1 keys
    bTreeNode<Type, M>* children[M];  // Stores up to M child pointers
    int keyCount;                     // Number of keys currently in the node
    bool isLeaf;                      // True if the node has no children

    bTreeNode()
    {
        keyCount = 0;
        isLeaf = true;

        for (int i = 0; i < M; i++)
        {
            children[i] = nullptr;
        }
    }
};