/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCProxyTarget-Protocol.h"
#import "_UIViewServiceDeputy-Protocol.h"
#import "_UIViewServiceDeputyRotationDelegate-Protocol.h"
#import "_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface-Protocol.h"

@class UIWindow, _UIAsyncInvocation;

@interface _UIViewServiceTextEffectsOperator : NSObject <XPCProxyTarget, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate>
{
    id _remoteViewControllerProxy;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    _UIAsyncInvocation *_invalidationInvocation;
    UIWindow *_hostedWindow;
    struct CGPoint _windowOffset;
    BOOL _isRestoringInputViews;
    id <_UIViewServiceDeputyDelegate> _delegate;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
}

+ (id)operatorWithRemoteViewControllerProxy:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)finishRotation;
- (void)rotateToInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (void)setHostedWindow:(id)arg1;
- (id)invalidate;
- (void)setDeputyDelegate:(id)arg1;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostWillEnterForeground;
- (void)__hostDidEnterBackground;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setContentSize:(id)arg1 windowOffset:(id)arg2;
- (void)__createHostedTextEffectsWithReplyHandler:(id)arg1;
- (void)windowDidGainFirstResponder:(id)arg1;
- (void)dealloc;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end
