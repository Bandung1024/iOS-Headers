/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MZKeyValueStoreController, MZKeyValueStoreTransaction, NSDictionary, NSError, NSMutableArray, NSObject<MZKeyValueStoreDeserializeOperationDelegate>;

@interface MZKeyValueStoreDeserializer : NSObject
{
    MZKeyValueStoreTransaction *_transaction;
    NSDictionary *_serverResponse;
    NSObject<MZKeyValueStoreDeserializeOperationDelegate> *_delegate;
    int _status;
    unsigned int _retrySeconds;
    BOOL _isDirty;
    MZKeyValueStoreController *_keyValueStoreController;
    NSMutableArray *_pendingDeserializations;
}

@property(retain) NSMutableArray *pendingDeserializations; // @synthesize pendingDeserializations=_pendingDeserializations;
@property(nonatomic) NSObject<MZKeyValueStoreDeserializeOperationDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int retrySeconds; // @synthesize retrySeconds=_retrySeconds;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSDictionary *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(retain, nonatomic) MZKeyValueStoreController *keyValueStoreController; // @synthesize keyValueStoreController=_keyValueStoreController;
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) BOOL hasBackoff; // @dynamic hasBackoff;
@property(readonly, nonatomic) NSError *requestError;
@property(readonly, nonatomic) BOOL versionMismatch; // @dynamic versionMismatch;
@property(readonly, nonatomic) BOOL success; // @dynamic success;
@property(readonly, nonatomic) BOOL genericError; // @dynamic genericError;
@property(readonly, nonatomic) BOOL validationError; // @dynamic validationError;
@property(readonly, nonatomic) BOOL authenticationError; // @dynamic authenticationError;
@property(readonly, nonatomic) BOOL unsupportedClient; // @dynamic unsupportedClient;
- (void)_delegateOperationDidFinish;
- (void)finishedDeserializationForKey:(id)arg1;
- (void)deserialize;
- (void)dealloc;
- (id)initWithTransaction:(id)arg1 response:(id)arg2;

@end
