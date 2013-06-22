/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderAudioMixOutputInternal, AVAudioMix, NSArray, NSDictionary;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput
{
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (id)init;
- (id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (void)dealloc;
- (void)finalize;
- (id)description;
@property(readonly, nonatomic) NSArray *audioTracks;
@property(readonly, nonatomic) NSDictionary *audioSettings;
- (id)_audioVolumeCurveForTrack:(id)arg1;
- (void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2;
@property(copy, nonatomic) AVAudioMix *audioMix;
- (id)mediaType;
- (id)_asset;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;

@end

