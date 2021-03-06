/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedMessagingCenter;

@interface MCMDMClient : NSObject
{
    CPDistributedMessagingCenter *_messageCenter;
}

+ (id)sharedClient;
- (id)init;
- (BOOL)authenticateWithCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 topic:(id)arg3 useDevelopmentAPNS:(BOOL)arg4 signMessage:(BOOL)arg5 outError:(id *)arg6;
- (BOOL)checkOutCheckInURL:(id)arg1 identity:(struct __SecIdentity *)arg2 topic:(id)arg3 signMessage:(BOOL)arg4 outError:(id *)arg5;
- (void)notifyNewConfiguration;
- (void)scheduleTokenUpdate;
- (void)simulatePush;
- (void)removeManagedAppsAccordingToFlags;

@end

