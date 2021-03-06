/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedMessagingCenter, NSData, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSTimer;

@interface MCProfileConnection : NSObject
{
    CPDistributedMessagingCenter *_messageCenter;
    struct __CFBag *_observers;
    CPDistributedMessagingCenter *_interactionServer;
    id <MCInteractionDelegate> _interactionDelegate;
    id _interactionLockDelayedContext;
    NSDictionary *_preflightResponse;
    NSData *_originalProfileData;
    _Bool _needToRestoreOriginalProfileData;
    int _userInputTimeoutType;
    NSTimer *_userInputTimer;
    NSObject<OS_dispatch_queue> *_notificationSyncQueue;
    NSMutableArray *_notificationTokens;
}

+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_effectiveSettingsDidChange:(id)arg1;
- (void)_internalDefaultsDidChange;
- (void)_defaultsDidChange;
- (void)_appWhitelistDidChange:(id)arg1;
- (void)_profileListDidChange;
- (void)_passcodePolicyDidChange;
- (void)_passcodeDidChange;
- (void)_restrictionDidChange;
- (void)_applyToObservers:(id)arg1;
- (void)checkInAsynchronously;
- (void)checkIn;
- (void)dealloc;
- (id)_init;

@end

