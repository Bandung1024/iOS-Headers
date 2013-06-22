/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedMessagingDelayedReplyContext, NSDictionary;

@interface CertUIRelayPrompt : NSObject
{
    NSDictionary *_messageInfo;
    CPDistributedMessagingDelayedReplyContext *_replyContext;
    id _completion;
}

+ (id)_actualCenter;
@property(retain, nonatomic) CPDistributedMessagingDelayedReplyContext *replyContext; // @synthesize replyContext=_replyContext;
- (void)showPromptWithCompletion:(id)arg1;
- (void)_showAlert;
- (id)_copyCancelOnlyUserNotificationInfo;
- (id)_copyUserNotificationInfo;
- (id)_localizedUntrustedCertAcceptNotAllowedMessage;
- (id)_localizedUntrustedCertAlertMessage;
- (id)_localizedUntrustedCertAlertTitle;
- (id)trustDigest;
- (id)_hostname;
- (id)_connectionDisplayName;
- (void)_receivedCancelOnlyResponseForNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long)arg2;
- (void)_receivedResponseForNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long)arg2;
- (void)_showDetails;
- (void)_actualMessagingCenter:(id)arg1 receivedReply:(id)arg2 error:(id)arg3 context:(void *)arg4;
- (BOOL)_launchSheetApp;
- (void)_invokeCompletionWithReply:(id)arg1;
- (id)_replyDictionaryWithCertUIResponse:(int)arg1;
- (void)dealloc;
- (id)initWithMessageInfo:(id)arg1 replyContext:(id)arg2;

@end

