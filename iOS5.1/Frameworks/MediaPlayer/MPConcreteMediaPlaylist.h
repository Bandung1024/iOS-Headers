/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaPlaylist.h>

@class MPMediaQuery, NSMutableDictionary;

@interface MPConcreteMediaPlaylist : MPMediaPlaylist
{
    NSMutableDictionary *_properties;
    MPMediaQuery *_itemsQuery;
    void *_clusterPlaylist;
}

- (void)endGeneratingGeniusClusterItems;
- (id)geniusClusterItemsWithCount:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)beginGeneratingGeniusClusterItemsWithSeedItems:(id)arg1 error:(id *)arg2;
- (void)populateWithSeedItem:(id)arg1 queue:(struct dispatch_queue_s *)arg2 completionBlock:(id)arg3;
- (void)populateWithSeedItem:(id)arg1 completionBlock:(id)arg2;
- (void)moveItemFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 completionBlock:(id)arg3;
- (void)removeAllItems;
- (void)removeItems:(id)arg1 atFilteredIndexes:(id)arg2 completionBlock:(id)arg3;
- (void)addItems:(id)arg1 completionBlock:(id)arg2;
- (void)addItem:(id)arg1 completionBlock:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (int)mediaTypes;
- (unsigned int)count;
- (id)representativeItem;
- (id)items;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (BOOL)existsInLibrary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 itemsQuery:(id)arg2;

@end

