/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

// Not exported
@interface TSKChangeEntry : NSObject
{
    id mChangeSource;
    NSMutableArray *mChanges;
}

@property(readonly, nonatomic) NSMutableArray *changes; // @synthesize changes=mChanges;
@property(readonly, nonatomic) id changeSource; // @synthesize changeSource=mChangeSource;
- (void)dealloc;
- (id)initWithChangeSource:(id)arg1 changes:(id)arg2;

@end

