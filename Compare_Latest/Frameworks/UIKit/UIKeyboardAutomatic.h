/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboard.h>

@interface UIKeyboardAutomatic : UIKeyboard
{
    BOOL showsCandidateBar;
    BOOL showsCandidateInline;
}

@property(nonatomic) BOOL showsCandidateInline; // @synthesize showsCandidateInline;
@property(nonatomic) BOOL showsCandidateBar; // @synthesize showsCandidateBar;
- (void)activate;
- (BOOL)_isAutomaticKeyboard;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(BOOL)arg2;
- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)arg1;
- (BOOL)isActive;
- (void)maximize;
- (void)minimize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
