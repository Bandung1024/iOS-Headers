/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAssetContainer-Protocol.h"

@class NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLShuffledAlbum : NSObject <PLAssetContainer>
{
    struct __CFArray *_toBackingMap;
    struct __CFArray *_fromBackingMap;
    struct NSObject *_backingAlbum;
    PLManagedAsset *_startingAsset;
    NSMutableOrderedSet *_assets;
}

+ (struct NSObject *)unshuffledAlbum:(struct NSObject *)arg1;
+ (struct NSObject *)shuffledAlbum:(struct NSObject *)arg1 startingAsset:(id)arg2;
@property(retain, nonatomic) NSMutableOrderedSet *_assets; // @synthesize _assets;
- (id)displayableIndexesForCount:(unsigned int)arg1;
@property(readonly, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
- (BOOL)canPerformEditOperation:(int)arg1;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
@property(readonly, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) NSString *name;
- (void)updateStackedImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
@property(nonatomic) unsigned int pendingItemsType;
@property(nonatomic) unsigned int pendingItemsCount;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
@property(readonly, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) NSString *uuid;
- (void)dealloc;
- (id)init;

@end

