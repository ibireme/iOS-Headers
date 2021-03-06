/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

// Not exported
@interface TSCH3DChartRepRenderQueue : NSObject
{
    NSMutableArray *mQueue;
    long long mCurrentPass;
    long long mPauseLevel;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
- (void)resume;
- (void)pause;
- (void)cancelCallback;
- (void)requestCallbackWithDelay:(float)arg1;
- (void)renderUpdate:(id)arg1;
- (void)modelInvalidated:(id)arg1;
- (void)threadRemoveRep:(id)arg1;
- (void)removeRep:(id)arg1;
- (void)addRep:(id)arg1 front:(_Bool)arg2;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

