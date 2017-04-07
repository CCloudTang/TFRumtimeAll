//
//  AppDelegate.h
//  demo-runtime-part5
//
//  Created by ztf on 17/4/5.
//  Copyright © 2017年 tf-demos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

