/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DeviceLocalAccount.h"

#import "AccountSettingsUIAccount-Protocol.h"

@interface DeviceLocalAccount (AccountSettingsUI) <AccountSettingsUIAccount>
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (void *)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2;
- (BOOL)supportsPush;
- (id)uniqueId;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)setTetheredEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)deleteLocalDataSourceForDataclass:(id)arg1;
- (BOOL)otherAccountEnabledForDataclass:(id)arg1;
- (void)showLocalStoreIfAppropriateForDataclass:(id)arg1;
- (void)hideLocalStoreForDataclass:(id)arg1;
@end

