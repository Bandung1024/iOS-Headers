/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetWriterInputHelper.h>

@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper
{
}

- (id)initWithConfigurationState:(id)arg1;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (int)status;
- (void)setSampleBufferFormatHint:(struct opaqueCMFormatDescription *)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;

@end

