/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface SPContentIndexer : NSObject
{
    NSString *_displayIdentifier;
    NSString *_category;
    struct __CXQuery *_query;
    struct __CXIndex *_index;
    unsigned int _version;
    struct CPRecordStore *_store;
    NSMutableArray *_dirtyRecords;
    NSMutableArray *_dirtyContent;
    NSMutableArray *_dirtyRemoves;
}

+ (void)initialize;
+ (void)preheat;
+ (id)indexerForDisplayIdentifier:(id)arg1 category:(id)arg2;
- (void)dealloc;
- (id)initWithDisplayIdentifier:(id)arg1 category:(id)arg2 version:(unsigned int)arg3;
- (void *)copyResultForIdentifier:(id)arg1;
- (void)cancelSearch;
- (BOOL)nextSearchResults:(id *)arg1;
- (void)beginSearch:(id)arg1;
- (void)removeIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2;
- (void *)_copyRecordForExternalID:(id)arg1;
- (BOOL)commitUpdates;
- (void)clearIndex;
- (void)_openOrCreateIndex;
- (BOOL)_openOrCreateStore;
- (id)_storePath;
- (id)_indexPath;

@end

