/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer
{
    AVQueuePlayerInternal *_queuePlayer;
}

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)arg1;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)playerWithURL:(id)arg1;
- (id)init;
- (id)initWithItems:(id)arg1;
- (void)dealloc;
- (int)_defaultActionAtItemEnd;
- (void)setActionAtItemEnd:(int)arg1;
- (id)items;
- (void)advanceToNextItem;
- (BOOL)canInsertItem:(id)arg1 afterItem:(id)arg2;
- (BOOL)_shouldEnqueueModifications;
- (void)_enqueueModification:(id)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (void)removeAllItems;
- (void)beginModifications;
- (void)commitModifications;

@end

