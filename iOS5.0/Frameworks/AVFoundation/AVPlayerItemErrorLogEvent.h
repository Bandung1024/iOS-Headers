/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying>
{
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) int errorStatusCode;
@property(readonly, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) NSString *errorComment;

@end

