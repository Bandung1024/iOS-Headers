/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol APSConnectionServerDelegate <NSObject>
- (void)connectionTopicsChanged:(id)arg1;
- (void)connectionWasClosed:(id)arg1;
- (BOOL)connectionDelegateHasIdentity:(id)arg1;
- (BOOL)connectionDelegateIsConnectedToService:(id)arg1;
- (void)connectionChangedCriticalReliability:(id)arg1;
- (void)connection:(id)arg1 didReceiveOutgoingMessageToSend:(id)arg2;
- (void)connection:(id)arg1 didReceiveCancellationForOutgoingMessageWithID:(unsigned int)arg2;
- (void)connection:(id)arg1 didReceiveFakeMessageToSend:(id)arg2;
@end

