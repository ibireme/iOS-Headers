//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@interface UINavigationController (MPUAdditions)
- (void)MPU_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)MPU_pushNowPlayingViewControllerOfClass:(Class)arg1 player:(id)arg2 animated:(BOOL)arg3;
- (void)MPU_popToViewController:(id)arg1 animated:(BOOL)arg2 popRequestSentCompletion:(CDUnknownBlockType)arg3;
- (void)MPU_popToViewControllerBeforeViewController:(id)arg1 animated:(BOOL)arg2;
- (void)MPU_popToRootViewControllerAnimated:(BOOL)arg1;
@end

