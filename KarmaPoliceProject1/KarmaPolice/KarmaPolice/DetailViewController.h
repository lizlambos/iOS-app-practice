//
//  DetailViewController.h
//  KarmaPolice
//
//  Created by Elizabeth Lambos on 19/12/13.
//  Copyright (c) 2013 Elizabeth Lambos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
