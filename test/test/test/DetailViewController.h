//
//  DetailViewController.h
//  test
//
//  Created by yize on 14-6-10.
//  Copyright (c) 2014年 yize. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

