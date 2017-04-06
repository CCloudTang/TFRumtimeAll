//
//  AppDelegate.h
//  demo-runtime-part10
//
//  Created by 融数 on 17/4/6.
//  Copyright © 2017年 tf-demos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

