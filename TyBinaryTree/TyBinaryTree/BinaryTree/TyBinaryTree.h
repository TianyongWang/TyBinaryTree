//
//  TyBinaryTree.h
//  TyBinaryTree
//
//  Created by 王天永 on 2017/8/8.
//  Copyright © 2017年 Masazumi柒. All rights reserved.
//

#import <Foundation/Foundation.h>
@class TyBinaryTreeNode;

@interface TyBinaryTree : NSObject
/**
 *  创建二叉排序树
 *  二叉排序树：左节点值全部小于根节点值，右节点值全部大于根节点值
 *
 *  @param values 数组
 *
 *  @return 二叉树根节点
 */
+ (TyBinaryTreeNode *)createTreeWithValues:(NSArray *)values;
/**
 *  向二叉排序树节点添加一个节点
 *
 *  @param treeNode 根节点
 *  @param value    值
 *
 *  @return 根节点
 */
+ (TyBinaryTreeNode *)addTreeNode:(TyBinaryTreeNode *)treeNode value:(NSInteger)value;
/**
 *  二叉树中某个位置的节点（按层次遍历）
 *
 *  @param index    按层次遍历树时的位置(从0开始算)
 *  @param rootNode 树根节点
 *
 *  @return 节点
 */
+ (TyBinaryTreeNode *)treeNodeAtIndex:(NSInteger)index inTree:(TyBinaryTreeNode *)rootNode;
/**
 *  先序遍历
 *  先访问根，再遍历左子树，再遍历右子树
 *
 *  @param rootNode 根节点
 *  @param handler  访问节点处理函数
 */
+ (void)preOrderTraverseTree:(TyBinaryTreeNode *)rootNode handler:(void(^)(TyBinaryTreeNode *treeNode))handler;
/**
 *  中序遍历
 *  先遍历左子树，再访问根，再遍历右子树
 *
 *  @param rootNode 根节点
 *  @param handler  访问节点处理函数
 */
+ (void)inOrderTraverseTree:(TyBinaryTreeNode *)rootNode handler:(void(^)(TyBinaryTreeNode *treeNode))handler;
/**
 *  后序遍历
 *  先遍历左子树，再遍历右子树，再访问根
 *
 *  @param rootNode 根节点
 *  @param handler  访问节点处理函数
 */
+ (void)postOrderTraverseTree:(TyBinaryTreeNode *)rootNode handler:(void(^)(TyBinaryTreeNode *treeNode))handler;
/**
 *  层次遍历（广度优先）
 *
 *  @param rootNode 二叉树根节点
 *  @param handler  访问节点处理函数
 */
+ (void)levelTraverseTree:(TyBinaryTreeNode *)rootNode handler:(void(^)(TyBinaryTreeNode *treeNode))handler;
/**
 *  二叉树的深度
 *
 *  @param rootNode 二叉树根节点
 *
 *  @return 二叉树的深度
 */
+ (NSInteger)depthOfTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树的宽度
 *
 *  @param rootNode 二叉树根节点
 *
 *  @return 二叉树宽度
 */
+ (NSInteger)widthOfTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树的所有节点数
 *
 *  @param rootNode 根节点
 *
 *  @return 所有节点数
 */
+ (NSInteger)numberOfNodesInTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树某层中的节点数
 *
 *  @param level    层
 *  @param rootNode 根节点
 *
 *  @return 层中的节点数
 */
+ (NSInteger)numberOfNodesOnLevel:(NSInteger)level inTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树叶子节点数
 *
 *  @param rootNode 根节点
 *
 *  @return 叶子节点数
 */
+ (NSInteger)numberOfLeafsInTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树最大距离（直径）
 *
 *  @param rootNode 根节点
 *
 *  @return 最大距离
 */
+ (NSInteger)maxDistanceOfTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树最大距离（直径）
 *
 *  @param rootNode 根节点
 *
 *  @return 最大距离
 */
+ (NSInteger)maxDistanceOfTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树中某个节点到根节点的路径
 *
 *  @param treeNode 节点
 *  @param rootNode 根节点
 *
 *  @return 存放路径节点的数组
 */
+ (NSArray *)pathOfTreeNode:(TyBinaryTreeNode *)treeNode inTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树中两个节点最近的公共父节点
 *
 *  @param nodeA    第一个节点
 *  @param nodeB    第二个节点
 *  @param rootNode 二叉树根节点
 *
 *  @return 最近的公共父节点
 */
+ (TyBinaryTreeNode *)parentOfNode:(TyBinaryTreeNode *)nodeA andNode:(TyBinaryTreeNode *)nodeB inTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树中两个节点之间的路径
 *
 *  @param nodeA    第一个节点
 *  @param nodeB    第二个节点
 *  @param rootNode 二叉树根节点
 *
 *  @return 两个节点间的路径
 */
+ (NSArray *)pathFromNode:(TyBinaryTreeNode *)nodeA toNode:(TyBinaryTreeNode *)nodeB inTree:(TyBinaryTreeNode *)rootNode;
/**
 *  二叉树两个节点之间的距离
 *
 *  @param nodeA    第一个节点
 *  @param nodeB    第二个节点
 *  @param rootNode 二叉树根节点
 *
 *  @return 两个节点间的距离（-1：表示没有找到路径）
 */
+ (NSInteger)distanceFromNode:(TyBinaryTreeNode *)nodeA toNode:(TyBinaryTreeNode *)nodeB inTree:(TyBinaryTreeNode *)rootNode;
/**
 *  翻转二叉树（又叫：二叉树的镜像）
 *
 *  @param rootNode 根节点
 *
 *  @return 翻转后的树根节点（其实就是原二叉树的根节点）
 */
+ (TyBinaryTreeNode *)invertBinaryTree:(TyBinaryTreeNode *)rootNode;
/**
 *  是否完全二叉树
 *  完全二叉树：若设二叉树的高度为h，除第h层外，其它各层的结点数都达到最大个数，第h层有叶子结点，并且叶子结点都是从左到右依次排布
 *
 *  @param rootNode 根节点
 *
 *  @return YES：是完全二叉树，NO：不是完全二叉树
 */
+ (BOOL)isCompleteBinaryTree:(TyBinaryTreeNode *)rootNode;
/**
 *  是否满二叉树
 *  满二叉树：除了叶结点外每一个结点都有左右子叶且叶子结点都处在最底层的二叉树
 *
 *  @param rootNode 根节点
 *
 *  @return YES：满二叉树，NO：非满二叉树
 */
+ (BOOL)isFullBinaryTree:(TyBinaryTreeNode *)rootNode;
/**
 *  是否平衡二叉树
 *  平衡二叉树：即AVL树，它是一棵空树或它的左右两个子树的高度差的绝对值不超过1，并且左右两个子树都是一棵平衡二叉树
 *
 *  @param rootNode 根节点
 *
 *  @return YES：平衡二叉树，NO：非平衡二叉树
 */
+ (BOOL)isAVLBinaryTree:(TyBinaryTreeNode *)rootNode;
@end
