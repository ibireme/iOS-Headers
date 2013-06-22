/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ABActionsController : NSObject
{
    void *_person;
    int _property;
    int _recordID;
    int _multiValueIdentifier;
    id _value;
    NSString *_stringValue;
    void *_context;
    int _lastPropertyForActions;
    struct __CFArray *_actionsForProperty;
}

+ (id)newActionsControllerForProperty:(int)arg1;
+ (int)defaultActionForProperty:(int)arg1;
- (id)initWithProperty:(int)arg1;
- (id)init;
- (void)dealloc;
- (void *)person;
- (int)actionsCountForProperty:(int)arg1;
- (id)titleForAction:(int)arg1;
- (id)titleAtIndex:(int)arg1 forProperty:(int)arg2;
- (void)resetPrimaryPropertyActions;
- (id)urlForAction:(int)arg1 forProperty:(int)arg2;
- (void)performAction:(int)arg1;
- (int)defaultAction;
- (void)performDefaultAction;
- (void)performActionAtIndex:(int)arg1 forProperty:(int)arg2;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setMultiValueIdentifier:(int)arg1;
- (void)setRecordID:(int)arg1;
- (void)setPerson:(void *)arg1;
- (void *)context;
- (void)setContext:(void *)arg1;
- (struct __CFArray *)_actionsForProperty:(int)arg1;
- (int)_actionAtIndex:(int)arg1 forProperty:(int)arg2;
- (void)_performAction:(int)arg1 forProperty:(int)arg2;

@end
