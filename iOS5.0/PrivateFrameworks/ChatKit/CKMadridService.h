/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKService.h>

@class CKEntity, FTCAccountMonitor, NSMutableArray, NSMutableDictionary;

@interface CKMadridService : CKService
{
    NSMutableDictionary *_preloadQueries;
    NSMutableArray *_knownIMHandles;
    FTCAccountMonitor *_accountMonitor;
    CKEntity *_unknownEntity;
    BOOL _blockingForChatLoad;
}

+ (void)tearDown;
+ (void)_setIMChatToDesiredDefaults:(id)arg1;
+ (id)sharedMadridService;
+ (unsigned long long)capabilities;
+ (void)setCapabilities:(unsigned long long)arg1;
+ (BOOL)_connectToDaemon:(BOOL)arg1;
+ (BOOL)_connectToDaemon;
+ (BOOL)isConnectedToDaemon;
+ (void)_disconnectFromDaemon;
+ (void)_daemonDisconnectedNotification:(id)arg1;
+ (void)_daemonConnectedNotification:(id)arg1;
+ (id)activeMadridAccounts;
+ (id)defaultMadridAccount;
+ (BOOL)isMadridEnabled;
+ (BOOL)isMadridSupported;
+ (void)_updateNetworkFlags;
- (Class)entityClass;
- (BOOL)ensureMadridConnection;
- (BOOL)isAvailable;
- (void)_handleLoginStatusChangedNotification:(id)arg1;
- (void)_handleActiveMadridAccountsDidChange:(id)arg1;
- (BOOL)hasActiveConversations;
- (int)unreadCountForConversation:(id)arg1;
- (void)markAllMessagesInConversationAsRead:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (id)_conversationWithRecipients:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)createConversationWithRecipients:(id)arg1;
- (id)conversationIDWithRecipients:(id)arg1;
- (id)_chat:(id)arg1 addMessage:(id)arg2 incrementUnreadCount:(BOOL)arg3;
- (void)_postNotification:(id)arg1 forMessage:(id)arg2;
- (id)_CKMessageFromIMMessage:(id)arg1 forConversation:(id)arg2;
- (BOOL)_handleTypingIndicationMessage:(id)arg1 inChat:(id)arg2;
- (BOOL)_handleRemovedMessage:(id)arg1 inChat:(id)arg2;
- (BOOL)_contentChangedFromOldMessage:(id)arg1 toNewMessage:(id)arg2;
- (BOOL)_handleChangedMessage:(id)arg1 inChat:(id)arg2 forQuery:(id)arg3;
- (void)_handleItemsDidChangeNotification:(id)arg1;
- (void)_setConversation:(id)arg1 forPreloadQuery:(id)arg2;
- (void)_removePreloadQuery:(id)arg1;
- (id)_preloadQueryForConversation:(id)arg1;
- (id)_registerChat:(id)arg1;
- (void)_unregisterChat:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_handleIMHandleIDStatusChangedNotification:(id)arg1;
- (void)_handleDaemonDidConnectNotification:(id)arg1;
- (void)manualConnectToIMChatRegistry;
- (void)_handleDaemonDidDisconnectNotification:(id)arg1;
- (void)_registerForIMNotifications;
- (id)init;
- (void)dealloc;
- (id)abPropertyTypes;
- (id)_IMMessageToConversation:(id)arg1 withText:(id)arg2 subject:(id)arg3 date:(id)arg4 messageParts:(id)arg5 isFinished:(BOOL)arg6 messageGUID:(id)arg7;
- (BOOL)containsConversation:(id)arg1;
- (int)unreadConversationCount;
- (int)unreadCount;
- (int)failedSendCount;
- (id)placeholderMessageForConversation:(id)arg1 withDate:(id)arg2;
- (id)newMessageWithMessage:(id)arg1 forConversation:(id)arg2 isForward:(BOOL)arg3;
- (id)newMessageWithComposition:(id)arg1 forConversation:(id)arg2;
- (BOOL)_chatHasValidAccount:(id)arg1;
- (void)_resetToDefaultAccountOnIMChat:(id)arg1;
- (void)_prepareIMChat:(id)arg1 andSendMessage:(id)arg2;
- (void)sendMessage:(id)arg1;
- (BOOL)_chatHasDowngradeMarkers:(id)arg1;
- (void)_setAndIncrementDowngradeMarkersForChat:(id)arg1 manual:(BOOL)arg2;
- (void)_clearDowngradeMarkersForChat:(id)arg1;
- (void)clearDowngradeMarkersForConversation:(id)arg1;
- (void)sendDowngradePingForMessage:(id)arg1 inConversation:(id)arg2 manualDowngrade:(BOOL)arg3;
- (void)cancelMessage:(id)arg1;
- (id)lastCanceledMessageTimeForConversation:(id)arg1;
- (id)consecutiveDowngradeAttemptsForConversation:(id)arg1 manualDowngrades:(BOOL)arg2;
- (void)_handleReceipientReceivedDowngradeNotification:(id)arg1;
- (void)__postDowngradeStateChanged:(id)arg1;
- (void)_handleChatPropertiesChangedNotification:(id)arg1;
- (id)lookupRecipientsForConversation:(id)arg1;
- (id)_placeholderDateForIMChat:(id)arg1;
- (id)conversationSummaries:(id)arg1 groupIDs:(id)arg2 groupedRecipients:(id)arg3;
- (id)_messagesFromChat:(id)arg1 forConversation:(id)arg2;
- (void)_setMessagesForChat:(id)arg1 onConversation:(id)arg2;
- (void)messagesForConversation:(id)arg1;
- (void)deleteMessage:(id)arg1 fromConversation:(id)arg2;
- (void)deleteMessagesForConversationIDs:(id)arg1 removeConversations:(BOOL)arg2;
- (BOOL)supportsDeliveryReceipts;
- (BOOL)supportsExtendedDeliveryError;
- (BOOL)restrictsMediaObjects;
- (BOOL)supportsMediaAttachments;
- (BOOL)canSendToRecipients:(id)arg1 withAttachments:(id)arg2 alertIfUnable:(BOOL)arg3;
- (id)copyEntityForAddressString:(id)arg1;
- (id)unknownEntity;
- (id)headerTitleForEntities:(id)arg1;
- (id)headerTitleForComposeRecipients:(id)arg1 mediaObjects:(id)arg2 subject:(id)arg3;
- (int)maxAttachmentCount;
- (BOOL)isValidAddress:(id)arg1;
- (int)_availabilityForIMHandle:(id)arg1 checkWithServer:(BOOL)arg2;
- (int)availabilityForAddress:(id)arg1 checkWithServer:(BOOL)arg2;
- (int)availabilityForEntity:(id)arg1 checkWithServer:(BOOL)arg2;
- (unsigned int)_maxTransferFileSizeForWiFi:(BOOL)arg1;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (void)_handleFileTransferRemovedNotification:(id)arg1;
- (void)_setTemporaryFileURL:(id)arg1 forGUID:(id)arg2;
- (id)_temporaryFileURLforGUID:(id)arg1;
- (void)_removeTemporaryFileURLforGUID:(id)arg1;
- (id)imChatForGroupID:(id)arg1;
- (id)_chatForConversation:(id)arg1;
- (id)_madridMessageForIMMessage:(id)arg1 inIMChat:(id)arg2;
- (void)resetEntityCaches;
- (void)newMessageContentChangedWithComposition:(id)arg1 forConversation:(id)arg2;
- (id)displayName;
- (id)_localizedErrorForReason:(int)arg1;
- (BOOL)canSendMessageWithMediaObjectTypes:(int *)arg1 errorCode:(int *)arg2;
- (BOOL)canSendMessageWithMediaObjectTypes:(int *)arg1;
- (BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canAcceptMediaObject:(id)arg1 givenMediaObjects:(id)arg2;
- (BOOL)canSendMessageWithParts:(id)arg1 subject:(id)arg2 error:(id *)arg3;

@end

