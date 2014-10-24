//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSScene, SBAlert, SBAlertManager, SBAlertWindow, UIScreen;

@protocol SBAlertManagerDelegate <NSObject>
- (double)sceneLevelForAlerts;
- (struct CGRect)sceneFrameForAlerts:(UIScreen *)arg1;

@optional
- (SBAlertWindow *)alertManager:(SBAlertManager *)arg1 newAlertWindowForScene:(FBSScene *)arg2;
- (_Bool)alertManager:(SBAlertManager *)arg1 shouldDeactivateDismissedAlert:(SBAlert *)arg2;
@end
