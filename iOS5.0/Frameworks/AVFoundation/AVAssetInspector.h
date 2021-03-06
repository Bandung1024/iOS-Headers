/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVFigObjectInspector.h>

#import "NSCopying-Protocol.h"

@class AVMetadataItem, NSArray, NSDictionary, NSString;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) float preferredRate;
@property(readonly, nonatomic) float preferredVolume;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) int naturalTimeScale;
@property(readonly, nonatomic) BOOL providesPreciseDurationAndTiming;
@property(readonly, nonatomic) int trackCount;
@property(readonly, nonatomic) NSArray *trackIDs;
@property(readonly, nonatomic) NSArray *alternateTrackGroups;
@property(readonly, nonatomic) NSDictionary *trackReferences;
@property(readonly, nonatomic) NSArray *mediaSelectionGroups;
@property(readonly, nonatomic) AVMetadataItem *creationDate;
@property(readonly, nonatomic) NSString *lyrics;
@property(readonly, nonatomic) NSArray *commonMetadata;
@property(readonly, nonatomic) NSArray *availableMetadataFormats;
- (id)metadataForFormat:(id)arg1;
- (BOOL)hasProtectedContent;
@property(readonly, nonatomic, getter=isExportable) BOOL exportable;
@property(readonly, nonatomic, getter=isReadable) BOOL readable;
@property(readonly, nonatomic, getter=isComposable) BOOL composable;

@end

