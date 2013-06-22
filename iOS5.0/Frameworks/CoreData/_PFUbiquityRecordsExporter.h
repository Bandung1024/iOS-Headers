/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSTimer, PFUbiquityLocation;

@interface _PFUbiquityRecordsExporter : NSObject
{
    NSString *_localPeerID;
    NSTimer *_tempMoveTimer;
    NSDate *_lastTransactionDate;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSPersistentStoreCoordinator *_monitoredPersistentStoreCoordinator;
    NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;
}

+ (void)initialize;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)shouldRespondToSaveNotification:(id)arg1;
- (id)createSetOfStoresToExportForNotification:(id)arg1;
- (void)cleanUpFromRolledbackPendingTransaction:(id)arg1 withNotification:(id)arg2;
- (void)managedObjectContextDidSave:(id)arg1;
- (id)createDictionaryForObjectsInSaveNotification:(id)arg1 forTransactionOfType:(int)arg2 withExportContext:(id)arg3 andSaveSnapshot:(id)arg4;
- (void)onlyExportFromPersistentStoreCoordinator:(id)arg1;
- (void)timerMoveLogsFromTempDirectory:(id)arg1;
- (void)scheduleTempMoveTimerWithPeerURL:(id)arg1;
@property(retain) NSDate *lastTransactionDate; // @synthesize lastTransactionDate=_lastTransactionDate;
@property(retain) NSTimer *tempMoveTimer; // @synthesize tempMoveTimer=_tempMoveTimer;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;

@end

