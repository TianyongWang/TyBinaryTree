//
//  ViewController.m
//  TyBinaryTree
//
//  Created by 王天永 on 2017/8/8.
//  Copyright © 2017年 Masazumi柒. All rights reserved.
//

#import "ViewController.h"
#import "TyBinaryTree.h"
#import "TyBinaryTreeNode.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSMutableArray *mutArray = [NSMutableArray array];
    for (int i = 0; i < 20; i ++) {
        NSInteger sub = arc4random() % 50;
        [mutArray addObject:@(sub)];
    }
    TyBinaryTreeNode *node = [TyBinaryTree createTreeWithValues:[mutArray copy]];
    __block NSMutableArray *orderArray = [NSMutableArray array];
    [TyBinaryTree preOrderTraverseTree:node handler:^(TyBinaryTreeNode *treeNode) {
        [orderArray addObject:@(treeNode.value)];
        NSLog(@"%@",treeNode);
    }];
    NSLog(@"先序遍历结果：%@", [orderArray componentsJoinedByString:@","]);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
