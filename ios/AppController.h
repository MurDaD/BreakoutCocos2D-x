//
//  AppController.h
//  BreakoutCocos2D-x
//
//  Created by Clawoo on 9/15/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController	*viewController;
}

@end

