//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class CKShareID, NSError, NSMutableArray;

@interface CKFetchUserPresenceOperation : CKOperation
{
    CKShareID *_shareID;
    CDUnknownBlockType _fetchUserPresenceCompletionBlock;
    NSMutableArray *_userPresence;
}

@property(retain, nonatomic) NSMutableArray *userPresence; // @synthesize userPresence=_userPresence;
@property(copy, nonatomic) CDUnknownBlockType fetchUserPresenceCompletionBlock; // @synthesize fetchUserPresenceCompletionBlock=_fetchUserPresenceCompletionBlock;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (Class)operationInfoClass;
- (id)initWithShareID:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSError *error;

@end

