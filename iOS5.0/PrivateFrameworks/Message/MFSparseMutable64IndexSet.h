/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFSparseMutable64IndexSet : NSObject
{
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    unsigned long long *_storage;
}

+ (id)indexSet;
- (void)dealloc;
- (void)_incrementStorageIfNecessaryForCount:(unsigned int)arg1;
- (void)_garbageCollectStorageIfNecessary;
- (void)addIndex:(unsigned long long)arg1;
- (void)addIndexes:(id)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (BOOL)containsIndex:(unsigned long long)arg1;
- (unsigned int)count;
- (unsigned long long)firstIndex;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (id)description;

@end

