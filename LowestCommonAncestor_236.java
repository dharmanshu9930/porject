//package Leetcode;
//
//public class LowestCommonAncestor_236 {
//    /**
//     * Definition for a binary tree node.
//     * public class TreeNode {
//     *     int val;
//     *     TreeNode left;
//     *     TreeNode right;
//     *     TreeNode(int x) { val = x; }
//     * }
//     */
//    class Solution {
//        public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
////         BP: find LCA of two nodes
////         SP: find p or q either in left or right
////         cse1 : when both exist independently in tree
////         case 2 : when parent child
//
//            if(root == null)
//            {
//                return null;
//
//            }
//            if(root == p || root ==q)
//                return root;
//
//            TreeNode L = lowestCommonAncestor(root.left, p, q);
//            TreeNode R = lowestCommonAncestor(root.right, p, q);
//
//
//            if(L != null && R!= null)
//                return root;
//
//            //         now if they are parent-child;
//            if(L != null && R==null)
//                return L;
//            if(R!= null && L ==null)
//                return R;
//
//
//            return null;
//        }
//    }
//}
