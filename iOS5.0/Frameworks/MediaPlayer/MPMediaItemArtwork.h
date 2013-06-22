/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPMediaItemArtwork : NSObject
{
    struct MPMediaItemArtworkInternal _internal;
}

@property(nonatomic) struct MPMediaItemArtworkInternal _internal; // @synthesize _internal;
@property(readonly, nonatomic) struct CGRect imageCropRect;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)albumImageDataWithSize:(struct CGSize)arg1;
- (id)albumImageWithSize:(struct CGSize)arg1;
- (id)coverFlowImageWithSize:(struct CGSize)arg1;
- (id)imageDataWithSize:(struct CGSize)arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize)arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize)arg1;
- (BOOL)hasArtworkAvailable;
- (void)dealloc;
- (id)initWithImage:(id)arg1;

@end

