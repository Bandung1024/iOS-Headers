/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataAccess/DAAccount.h>

@interface DAAccount (TrustHandling)
- (id)description;
- (BOOL)handleTrustChallenge:(id)arg1;
- (void)handleTrust:(struct __SecTrust *)arg1 forHost:(id)arg2 withCompletionBlock:(id)arg3;
- (id)_serverSuffixesToAlwaysFail;
- (int)_actionForTrust:(struct __SecTrust *)arg1 host:(id)arg2 service:(id)arg3;
@end

