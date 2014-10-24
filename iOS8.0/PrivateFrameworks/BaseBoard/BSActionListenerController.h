//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSActionListener, NSObject<OS_dispatch_queue>;

@interface BSActionListenerController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _transactionCount;
    BSActionListener *_listener;
    unsigned int _listenerCount;
    unsigned int _listenerTearDownToken;
}

+ (id)sharedInstance;
- (id)listener;
- (void)endTransactionForListener:(id)arg1;
- (void)endTransaction;
- (void)beginTransactionForListener:(id)arg1;
- (void)beginTransaction;
- (void)dealloc;
- (id)init;

@end
