//
//  OusamaKingAppDelegate.h
//  OusamaKing
//
//  Created by Yuki Ueda on 10/07/27.
//  Copyright Three One Systems, Inc. 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OusamaKingViewController;

@interface OusamaKingAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    OusamaKingViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet OusamaKingViewController *viewController;

@end

