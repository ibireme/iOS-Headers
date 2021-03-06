/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMUIEvent.h>

@class DOMTouchList;

@interface DOMTouchEvent : DOMUIEvent
{
}

- (void)initTouchEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 touches:(id)arg14 targetTouches:(id)arg15 changedTouches:(id)arg16 scale:(float)arg17 rotation:(float)arg18;
@property(readonly) BOOL metaKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL ctrlKey;
@property(readonly) float rotation;
@property(readonly) float scale;
@property(readonly) DOMTouchList *changedTouches;
@property(readonly) DOMTouchList *targetTouches;
@property(readonly) DOMTouchList *touches;

@end

