/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_MFComposeRecipientView.h"

@class CKService, NSError, NSMutableDictionary, UIActionSheet;

@interface CKComposeRecipientView : _MFComposeRecipientView
{
    CKService *_preferredService;
    BOOL _canSend;
    NSError *_serviceError;
    BOOL _alreadyShowedAlertForTooManyRecipientsError;
    NSMutableDictionary *_recipientAvailabilityTimeoutTimers;
    UIActionSheet *_actionSheet;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)customOverlayContainer;
- (void)selectComposeRecipientAtom:(id)arg1;
- (void)reflow;
- (int)atomStyleForRecipient:(id)arg1;
- (BOOL)_addable;
- (void)removeRecipient:(id)arg1;
- (void)removeAddressAtIndex:(int)arg1;
- (void)removeAddresses;
- (void)_addRecipient:(id)arg1;
- (void)_addRecipient:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addRecipient:(id)arg1;
- (void)addRecipient:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)handleMadridServiceActiveAccountsChangedNotification:(id)arg1;
- (void)handlePreferredServiceChangedNotification:(id)arg1;
- (id)_alternateAddressesForMFComposeRecipient:(id)arg1 onlyIMessageAble:(BOOL)arg2;
- (void)_checkAvailabilityOfAlternateAddressesForMFComposeRecipient:(id)arg1;
- (void)_refreshActionSheet;
- (void)_showActionSheetForAtom:(id)arg1 animated:(BOOL)arg2;
- (void)startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)handleRecipientAvailabilityTimeout:(id)arg1;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (void)reset;
- (void)stopCheckingRecipientAvailability;
- (void)updateRecipientLimit;
- (BOOL)canInsertMoreRecipients;
- (id)_recipientCausingTooManyRecipientsError;
- (void)_showOneTimeErrorAlertForTooManyRecipientsUponAddIfNecessary;
- (void)_showErrorAlertForTooManyRecipientsUponAdd;
- (void)showErrorAlertForTooManyRecipientsUponSendIfNecessary;
- (void)_showErrorAlertForTooManyRecipientsUponSend;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) NSError *serviceError; // @synthesize serviceError=_serviceError;
@property(nonatomic) BOOL canSend; // @synthesize canSend=_canSend;
@property(retain, nonatomic) CKService *preferredService; // @synthesize preferredService=_preferredService;

@end
