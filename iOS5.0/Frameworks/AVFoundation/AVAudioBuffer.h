/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVAudioBuffer : NSObject
{
    void *_impl;
}

@property(readonly) int channels;
@property(readonly) int bytesCapacity;
@property int bytesDataSize;
@property(readonly) void *data;
@property(readonly) int packetDescriptionCapacity;
@property(readonly) int packetDescriptionCount;
@property(readonly) struct AudioStreamPacketDescription *packetDescriptions;
- (void)setPacketDescriptions:(const struct AudioStreamPacketDescription *)arg1 count:(int)arg2;

@end

