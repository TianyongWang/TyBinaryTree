//
//  TyBinaryTreeNode.h
//  TyBinaryTree
//
//  Created by 王天永 on 2017/8/8.
//  Copyright © 2017年 Masazumi柒. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TyBinaryTreeNode : NSObject
/**
 *  值
 */
@property (nonatomic, assign) NSInteger value;
/**
 *  左节点
 */
@property (nonatomic, strong) TyBinaryTreeNode *leftNode;
/**
 *  右节点
 */
@property (nonatomic, strong) TyBinaryTreeNode *rightNode;
@end
