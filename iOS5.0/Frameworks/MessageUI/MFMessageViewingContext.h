/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ActivityMonitor, MFError, MFLock, MailMessage, MessageBody, MimePart, NSArray, NSObject<MFMessageViewingContextDelegate>, NSTimer;

@interface MFMessageViewingContext : NSObject
{
    NSObject<MFMessageViewingContextDelegate> *_delegate;
    MailMessage *_message;
    MessageBody *_body;
    id _content;
    MFLock *_contentLock;
    ActivityMonitor *_loadTask;
    MimePart *_loadedPart;
    NSArray *_signers;
    MFError *_secureMIMEError;
    struct __CFDictionary *_progresses;
    NSTimer *_updater;
    unsigned int _contentOffset;
    unsigned int _loadIncrement;
    unsigned int _loadedFullData:1;
    unsigned int _loadBestAlternative:1;
    unsigned int _hasNoContent:1;
    unsigned int _failedToLoad:1;
    unsigned int _isOutgoingMessage:1;
    unsigned int _isDraftMessage:1;
    unsigned int _isEditableMessage:1;
}

+ (unsigned int)nextOffsetForOffset:(unsigned int)arg1 totalLength:(unsigned int)arg2 requestedAmount:(unsigned int)arg3;
- (id)initWithMessage:(id)arg1;
- (void)dealloc;
- (void)_setContent:(id)arg1;
@property(readonly, nonatomic) id content;
@property(readonly, nonatomic) BOOL hasNoContent;
@property(readonly, nonatomic) BOOL isMessageSigned;
@property(readonly, nonatomic) BOOL isMessageEncrypted;
@property(nonatomic) BOOL isOutgoingMessage;
@property(nonatomic) BOOL isDraftMessage;
@property(nonatomic) BOOL isEditableMessage;
- (void)_setContentOffset:(unsigned int)arg1;
- (void)_setMessageBody:(id)arg1;
- (id)uniqueID;
- (void)_setSigners:(id)arg1;
@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
- (void)_setSecureMIMEError:(id)arg1;
@property(readonly, nonatomic) MFError *secureMimeError; // @synthesize secureMimeError=_secureMIMEError;
- (id)attachments;
- (id)fileWrappersForImageAttachments;
- (unsigned int)numberOfImageAttachments;
- (void)_loadAttachments:(id)arg1;
@property(readonly, nonatomic) BOOL hasLoaded;
@property(readonly, nonatomic) BOOL isPartial;
@property(readonly, nonatomic) BOOL failedToLoad;
- (void)cancelLoad;
- (void)setLoadTask:(id)arg1;
- (void)unload;
- (void)loadAsPlainText:(BOOL)arg1 asHTML:(BOOL)arg2 downloadIfNecessary:(BOOL)arg3;
- (void)loadFull;
- (void)loadWithPriority:(int)arg1;
- (void)load;
- (void)loadAttachment:(id)arg1 progress:(id)arg2;
- (void)_updateProgress:(id)arg1;
- (void)loadMore;
- (void)loadBestAlternative;
- (void)_setLoadedPart:(id)arg1;
- (void)_notifyInitialLoadComplete;
- (void)_notifyFullMessageLoadFailed;
- (void)_notifyAttachmentComplete:(id)arg1 monitor:(id)arg2;
- (void)_notifyCompletelyComplete;
@property(nonatomic) NSObject<MFMessageViewingContextDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int contentOffset; // @synthesize contentOffset=_contentOffset;
@property(readonly, nonatomic) MimePart *loadedPart; // @synthesize loadedPart=_loadedPart;
@property(readonly, nonatomic) ActivityMonitor *loadTask; // @synthesize loadTask=_loadTask;
@property(readonly, nonatomic) MessageBody *messageBody; // @synthesize messageBody=_body;
@property(readonly, nonatomic) MailMessage *message; // @synthesize message=_message;

@end

