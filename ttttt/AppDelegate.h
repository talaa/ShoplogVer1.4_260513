//
//  AppDelegate.h
//  ttttt
//
//  Created by Tamer Alaa on 9/16/12.
//  Copyright (c) 2012 Tamer Alaa. All rights reserved.
//

#import <UIKit/UIKit.h>
#define KRated @"isalreadyrated"




@interface AppDelegate : UIResponder <UIApplicationDelegate, UIAlertViewDelegate>
@property (strong, nonatomic) UIWindow *window;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;


- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end
