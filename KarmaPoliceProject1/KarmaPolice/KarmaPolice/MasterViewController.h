//
//  MasterViewController.h
//  KarmaPolice
//
//  Created by Elizabeth Lambos on 19/12/13.
//  Copyright (c) 2013 Elizabeth Lambos. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
