/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface IMFileTransferCenter : NSObject
{
    NSMutableDictionary *_guidToTransferMap;
    NSMutableDictionary *_guidToRemovedTransferMap;
    NSMutableDictionary *_accountIDToTransferGUIDsMap;
    NSMutableArray *_preauthorizedInfos;
    NSMutableArray *_preauthorizedGUIDs;
    NSMutableSet *_activeTransfers;
    NSMutableSet *_pendingTransfers;
}

+ (Class)fileTransferClass;
+ (Class)transferCenterClass;
+ (void)setTransferCenterClass:(Class)arg1;
+ (id)sharedInstance;
- (void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)_handleAllFileTransfers:(id)arg1;
- (void)_handleStandaloneFileTransferRegistered:(id)arg1;
- (void)acceptFileTransferIfPreauthorzed:(id)arg1;
- (BOOL)wasFileTransferPreauthorized:(id)arg1;
- (void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4;
- (BOOL)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2;
- (void)clearFinishedTransfers;
@property(readonly, nonatomic) NSArray *orderedTransfers;
@property(readonly, nonatomic) NSArray *activeTransfers;
@property(readonly, nonatomic) NSDictionary *transfers;
- (id)transfersForAccount:(id)arg1;
- (void)retargetTransfer:(id)arg1 toPath:(id)arg2;
- (void)deleteTransfer:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)stopTransfer:(id)arg1;
- (void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4;
- (void)sendTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1 includeRemoved:(BOOL)arg2;
- (id)transferForGUID:(id)arg1;
- (void)assignTransfer:(id)arg1 toHandle:(id)arg2;
- (void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;
- (BOOL)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2;
- (void)_addTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1 toAccount:(id)arg2;
- (void)_clearTransfers;
- (void)_removeAllActiveTransfers;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_addActiveTransfer:(id)arg1;
@property(readonly, nonatomic) BOOL hasActiveFileTransfers;
- (void)acknowledgeAllPendingTransfers;
- (void)acknowledgePendingTransfer:(id)arg1;
- (void)_removePendingTransfer:(id)arg1;
- (void)_addPendingTransfer:(id)arg1;
@property(readonly, nonatomic) BOOL hasPendingFileTransfers;
- (void)dealloc;

@end

