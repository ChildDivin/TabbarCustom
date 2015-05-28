//
//  AppDelegate.h
//  Urban96
//
//  Created by Tops on 5/28/15.
//  Copyright (c) 2015 Tops. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;
@class UITabBarCustom;
@interface AppDelegate : UIResponder <UIApplicationDelegate,UITabBarControllerDelegate>
{
    ViewController *viewObj;
}
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navObj;
@property (nonatomic) BOOL isPopToAllView;
@property (nonatomic, retain) UITabBarCustom *objCustomTabBar;
-(void)gotoDetailApp:(int)pintTabId;
@end

