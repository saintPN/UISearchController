//
//  searchTableViewController.h
//  searchDemo
//
//  Created by saintPN on 15/9/23.
//  Copyright (c) 2015年 saintPN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface searchTableViewController : UITableViewController

@property (strong, nonatomic) UISearchController *searchController;

@property (strong,nonatomic) NSMutableArray *dataList;

@property (strong,nonatomic) NSMutableArray  *searchList;

@end
