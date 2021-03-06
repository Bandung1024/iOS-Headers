//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPMediaItem, MPMediaQuery;

@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue
{
    MPMediaQuery *_mediaQuery;
    MPMediaItem *_firstItem;
    unsigned int _shuffleType;
    unsigned int _repeatType;
}

@property(readonly, nonatomic) unsigned int repeatType; // @synthesize repeatType=_repeatType;
@property(readonly, nonatomic) unsigned int shuffleType; // @synthesize shuffleType=_shuffleType;
@property(readonly, nonatomic) MPMediaItem *firstItem; // @synthesize firstItem=_firstItem;
@property(readonly, nonatomic) MPMediaQuery *mediaQuery; // @synthesize mediaQuery=_mediaQuery;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;

@end

