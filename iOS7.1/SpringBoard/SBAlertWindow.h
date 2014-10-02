//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWindow.h"

@class NSMapTable, SBAlertWindowViewController;

@interface SBAlertWindow : SBWindow
{
    SBAlertWindowViewController *_rootViewController;
    NSMapTable *_alertToDisplayMap;
}

+ (int)jailBehavior;
- (void)noteInterfaceOrientationChangingTo:(long long)arg1 animated:(_Bool)arg2;
- (id)stackedAlertsIncludingActiveAlert:(_Bool)arg1;
- (int)stackedDisplayCount;
- (_Bool)hasActiveAlertsOrDisplays;
- (_Bool)deactivateAlert:(id)arg1;
- (void)displayAlert:(id)arg1;
- (_Bool)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithScreen:(id)arg1;
- (id)initWithScreen:(id)arg1 rootViewController:(id)arg2;

@end
