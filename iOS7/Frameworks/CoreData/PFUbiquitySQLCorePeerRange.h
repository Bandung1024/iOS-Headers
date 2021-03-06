/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSString;

// Not exported
@interface PFUbiquitySQLCorePeerRange : NSObject
{
    NSString *_owningPeerID;
    NSString *_entityName;
    NSNumber *_rangeStart;
    NSNumber *_rangeEnd;
    NSNumber *_peerStart;
    NSNumber *_peerEnd;
}

@property(readonly, nonatomic) NSNumber *peerEnd; // @synthesize peerEnd=_peerEnd;
@property(readonly, nonatomic) NSNumber *peerStart; // @synthesize peerStart=_peerStart;
@property(readonly, nonatomic) NSNumber *rangeEnd; // @synthesize rangeEnd=_rangeEnd;
@property(readonly, nonatomic) NSNumber *rangeStart; // @synthesize rangeStart=_rangeStart;
@property(readonly, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(readonly, nonatomic) NSString *owningPeerID; // @synthesize owningPeerID=_owningPeerID;
- (id)description;
- (void)dealloc;
- (id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6;

@end

