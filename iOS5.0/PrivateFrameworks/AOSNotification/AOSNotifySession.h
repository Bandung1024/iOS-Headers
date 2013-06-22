/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AOSNotifySession : NSObject
{
    unsigned int _serverPort;
    id <AOSNotifySessionDelegate> _delegate;
}

+ (id)copySetupToken:(id *)arg1;
+ (id)copySerialNum:(id *)arg1;
+ (id)copyStoreAccount;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (id)addAccount:(id)arg1;
- (id)removeAccount:(id)arg1;
- (id)retrieveCurrentAccountForService:(id)arg1 returningAccount:(id *)arg2;
- (id)retrieveAllAccounts:(id *)arg1;
- (void)_vetResultReceived:(id)arg1;
- (void)_stopDeliveringNotifications;
- (void)_vetFinished:(id)arg1;
- (id)vetEmailAccount:(id)arg1;
- (id)cancelEmailVet;
- (id)getSetupToken:(id *)arg1;
- (void)_topicNotified:(id)arg1;
- (void)startListeningOnTopic:(id)arg1;
- (void)stopListeningOnTopic:(id)arg1;
@property(nonatomic) id <AOSNotifySessionDelegate> delegate; // @synthesize delegate=_delegate;

@end

