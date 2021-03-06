//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKComposition, CKEntity, IMChat, IMService, NSArray, NSAttributedString, NSString, UIImage;

@interface CKConversation : NSObject
{
    NSArray *_recipients;
    NSString *_name;
    IMChat *_chat;
    unsigned int _limitToLoad;
    struct {
        unsigned int ignoringTypingUpdates:1;
    } _conversationFlags;
    BOOL _needsReload;
    NSArray *_pendingHandles;
    UIImage *_thumbnailImage;
    NSAttributedString *_groupName;
}

+ (id)newPendingConversation;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (unsigned int)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1;
+ (id)_iMessage_localizedErrorForReason:(int)arg1;
+ (BOOL)_iMessage_canSendComposition:(id)arg1 error:(id *)arg2;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(int *)arg2;
+ (int)_iMessage_maxAttachmentCount;
+ (BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (id)_sms_localizedErrorForReason:(int)arg1;
+ (BOOL)_sms_canSendComposition:(id)arg1 error:(id *)arg2;
+ (BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1;
+ (BOOL)_sms_canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(int *)arg2;
+ (int)_sms_maxAttachmentCount;
+ (BOOL)_sms_mediaObjectPassesRestriction:(id)arg1;
@property(readonly, retain, nonatomic) NSAttributedString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) unsigned int limitToLoad; // @synthesize limitToLoad=_limitToLoad;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(copy, nonatomic) NSArray *pendingHandles; // @synthesize pendingHandles=_pendingHandles;
- (id)copyForPendingConversation;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1;
- (id)_nameForHandle:(id)arg1;
@property(readonly, retain, nonatomic) NSString *serviceDisplayName;
- (BOOL)outgoingBubbleColor;
@property(readonly, nonatomic) BOOL buttonColor;
@property(readonly, retain, nonatomic) NSString *previewText;
@property(nonatomic) NSString *displayName;
@property(readonly, nonatomic) BOOL hasDisplayName;
@property(readonly, retain, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) unsigned int disclosureAtomStyle; // @dynamic disclosureAtomStyle;
@property(readonly, nonatomic) BOOL shouldShowCharacterCount;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)updateUserActivityWithComposition:(id)arg1;
@property(nonatomic) BOOL localUserIsRecording;
@property(nonatomic) BOOL localUserIsTyping;
- (BOOL)_chatSupportsTypingIndicators;
- (void)sendMessage:(id)arg1 newComposition:(BOOL)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3;
- (id)messageWithComposition:(id)arg1;
- (void)_recordRecentContact;
- (BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2;
- (BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (BOOL)canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2;
- (BOOL)canSendComposition:(id)arg1 error:(id *)arg2;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
@property(readonly, nonatomic, getter=isPending) BOOL pending;
@property(readonly, copy, nonatomic) NSArray *recipientStrings;
@property(readonly, copy, nonatomic) NSArray *pendingEntities; // @dynamic pendingEntities;
- (void)setPendingComposeRecipients:(id)arg1;
- (int)compareBySequenceNumberAndDateDescending:(id)arg1;
- (id)shortDescription;
- (id)description;
- (BOOL)isPlaceholder;
- (void)markAllMessagesAsRead;
- (void)enumerateMessagesWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setLoadedMessageCount:(unsigned int)arg1;
- (void)loadMoreMessages;
- (void)loadAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (void)deleteAllMessages;
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1;
- (id)date;
@property(readonly, nonatomic) BOOL isToEmailAddress;
@property(readonly, nonatomic) unsigned int recipientCount;
- (id)uniqueIdentifier;
@property(readonly, retain, nonatomic) NSString *groupID; // @dynamic groupID;
- (BOOL)noAvailableServices;
- (BOOL)sendButtonColor;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (BOOL)_handleIsForThisConversation:(id)arg1;
@property(readonly, retain, nonatomic) IMService *sendingService;
- (void)refreshServiceForSending;
- (void)removeRecipientHandles:(id)arg1;
- (void)addRecipientHandles:(id)arg1;
- (void)setMutedUntilDate:(id)arg1;
- (void)unmute;
@property(readonly, nonatomic, getter=isMuted) BOOL muted;
- (BOOL)canInsertMoreRecipients;
- (int)maximumRecipientsForSendingService;
@property(readonly, nonatomic) BOOL supportsMutatingGroupMembers;
@property(readonly, nonatomic, getter=hasLeft) BOOL left;
@property(readonly, nonatomic) BOOL canLeave;
@property(readonly, nonatomic, getter=isGroupConversation) BOOL groupConversation;
@property(nonatomic) BOOL forceMMS; // @dynamic forceMMS;
@property(nonatomic, getter=isIgnoringTypingUpdates) BOOL ignoringTypingUpdates; // @dynamic ignoringTypingUpdates;
- (BOOL)isDowngraded;
@property(retain, nonatomic) NSString *rememberedKeyboard;
@property(retain, nonatomic) CKComposition *unsentComposition; // @dynamic unsentComposition;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_chatItemsDidChange:(id)arg1;
- (void)acceptTransfer:(id)arg1;
@property(readonly, retain, nonatomic) CKEntity *recipient; // @dynamic recipient;
@property(readonly, retain, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly, nonatomic) BOOL hasUnreadMessages; // @dynamic hasUnreadMessages;
@property(readonly, nonatomic) unsigned int unreadCount; // @dynamic unreadCount;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (void)resetCaches;
- (void)resetNameCaches;
- (void)dealloc;
- (id)initWithChat:(id)arg1;
- (id)init;
- (BOOL)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2;
- (BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (BOOL)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2;
- (BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (void)_postThumbnailChanged;
- (id)thumbnail;
- (void)regenerateThumbnail;
- (id)__generateThumbnailOfDiameter:(float)arg1 withRecordIDs:(id)arg2 recipientCount:(unsigned int)arg3;
- (id)_messageOrderedABRecordIDsForChatItems:(id)arg1;
- (id)__generateThumbnailOfDiameter:(float)arg1 withRecipientImage:(id)arg2 andOtherRecipient:(id)arg3;

@end

