//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSOperationQueue : NSObject
{
    id _private;
    void *_reserved;
}

+ (id)mainQueue;
+ (id)currentQueue;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)__;
- (void)__:(id)arg1;
- (id)description;
- (void)waitUntilAllOperationsAreFinished;
- (void)cancelAllOperations;
- (void)setName:(id)arg1;
- (id)name;
- (void)setOvercommitsOperations:(BOOL)arg1;
- (BOOL)overcommitsOperations;
- (void)setSuspended:(BOOL)arg1;
- (BOOL)isSuspended;
- (void)setMaxConcurrentOperationCount:(int)arg1;
- (int)maxConcurrentOperationCount;
- (unsigned int)operationCount;
- (id)operations;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)addOperation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

