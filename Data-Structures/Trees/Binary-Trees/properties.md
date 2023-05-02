# Properties of Binary Trees:

#### 1. Maximum number of nodes at level 'l' of a binary tree is 2^(l - 1)

This property states that the maximum number of nodes at any level 'l' of a binary tree is 2<sup>(l - 1)</sup>. This can be proven using mathematical induction.

- Base case: For level 1, the maximum number of nodes is 2<sup>(l - 1)</sup> = 1, which is true.

- Inductive step: Assume that the property holds for level 'k', i.e., the maximum number of nodes at level 'k' is 2<sup>(k - 1)</sup>. We need to prove that the property holds for level 'k+1', i.e., the maximum number of nodes at level 'k+1' is 2^k.

Consider a binary tree of height 'k+1'. The root of the tree is at level 1, and each level below it has twice the number of nodes as the level above it. Thus, the maximum number of nodes at level 'k+1' is twice the maximum number of nodes at level 'k', which is 2 * 2<sup>(k - 1)</sup> = 2<sup>k</sup>.

Therefore, the property holds for all levels of a binary tree.

#### 2. Maximum number of nodes in a binary tree of height 'h' is 2<sup>h</sup> - 1

This property states that the maximum number of nodes in a binary tree of height 'h' is 2<sup>h</sup> - 1. This can be proven using mathematical induction.

- Base case: For height 1, the maximum number of nodes is 2<sup>1</sup> - 1 = 1, which is true.

- Inductive step: Assume that the property holds for height 'k', i.e., the maximum number of nodes in a binary tree of height 'k' is 2<sup>k</sup> - 1. We need to prove that the property holds for height 'k+1', i.e., the maximum number of nodes in a binary tree of height 'k+1' is 2<sup>(k+1)</sup> - 1.

Consider a binary tree of height 'k+1'. The root of the tree is at height 1, and each level below it has twice the number of nodes as the level above it. Thus, the maximum number of nodes in a binary tree of height 'k+1' is the sum of the maximum number of nodes in the left and right subtrees of the root, plus the root itself, which is:

2 * (2<sup>k</sup> - 1) + 1 = 2<sup>(k+1)</sup> - 1

Therefore, the property holds for all heights of a binary tree.

#### 3. In a Binary Tree with N nodes, the minimum possible height or the minimum number of levels is log<sub>2</sub>(N+1)

This property states that the minimum possible height or the minimum number of levels of a binary tree with 'n' nodes is log<sub>2</sub>(n+1). 

Proof: Consider a complete binary tree of height 'h' with the maximum number of nodes, i.e., 2<sup>h</sup> - 1. 

n <= 2<sup>h</sup> - 1   (since we are considering the complete binary tree with the maximum number of nodes) <br>
n+1 <= 2<sup>h</sup>

Taking the log base 2 of both sides, we get:

log<sub>2</sub>(n+1) <= h

Therefore, the minimum possible height of a binary tree with 'n' nodes is log<sub>2</sub>(n+1), and since the number of levels is one more than the height, the minimum possible number of levels is log<sub>2</sub>(n+1) + 1.

#### 4. A Binary Tree with L leaves has at least | log<sub>2</sub>(L) |+ 1   levels

This property states that a binary tree with 'L' leaves has at least | Log<sub>2</sub>(L) |+ 1 levels, where '|.|' denotes the absolute value function.

Proof: Consider a binary tree with 'L' leaves. The minimum possible height of this tree is log<sub>2</sub>(L), since a binary tree with 'L' leaves can have at most log<sub>2</sub>(L) + 1 levels. The minimum possible number of levels is log<sub>2</sub>(L) + 1 when the leaves are in the leftmost positions.

Therefore, a binary tree with 'L' leaves has at least | log<sub>2</sub>(L) |+ 1 levels.

#### 5. In a Binary tree where every node has 0 or 2 children, the number of leaf nodes is always one more than nodes with two children

This property states that in a binary tree where every node has 0 or 2 children, the number of leaf nodes is always one more than the number of nodes with two children.

Proof: Consider a binary tree where every node has 0 or 2 children. Let 'l' be the number of leaf nodes and 't' be the number of nodes with two children. 

Each non-leaf node in the tree has either 0 or 2 children. Therefore, the total number of children in the tree is equal to the sum of the number of leaf nodes and twice the number of nodes with two children, i.e.,

2t + l = total number of nodes

Since every node in the tree except the root has a parent, the total number of edges in the tree is equal to the total number of nodes minus 1, i.e.,

2t + l - 1 = total number of edges

In a binary tree, the total number of edges is always one less than the total number of nodes, i.e.,

total number of edges = total number of nodes - 1

Substituting this equation in the previous equation, we get:

2t + l - 1 = total number of nodes - 1
2t + l = total number of nodes

Substituting this equation in the previous equation, we get:

2t + l - 1 = l + t - 1
t = l + 1

Therefore, the number of leaf nodes is always one more than the number of nodes with two children.

#### 6. In a non-empty binary tree, if n is the total number of nodes and e is the total number of edges, then e = n-1

This property states that in a non-empty binary tree, the total number of edges is one less than the total number of nodes.

Proof: We can prove this property using induction. 

Base Case: For a tree with a single node, there are zero edges, so the property holds.

Inductive Step: Assume that the property holds for all binary trees with k nodes, and consider a binary tree with k+1 nodes.

Let's remove a leaf node from the tree. This reduces the number of nodes by one and also reduces the number of edges by one. The resulting tree has k nodes and k-1 edges, and by our assumption, k-1 = (k+1)-1,  so the property holds for the new tree.

Now, let's add a new leaf node back to the tree. This increases the number of nodes and edges by one. The resulting tree has k+1 nodes and k edges, so the property holds for this tree as well.

Therefore, the property holds for all non-empty binary trees.
