/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class GMMClientCapabilities;

@interface GMMDirectionsIconRequest : PBRequest
{
    GMMClientCapabilities *_capabilities;
    BOOL _hasCachedIconVersion;
    int _cachedIconVersion;
    CDStruct_815f15fd _cachedIconIDs;
}

@property(nonatomic) BOOL hasCachedIconVersion; // @synthesize hasCachedIconVersion=_hasCachedIconVersion;
@property(retain, nonatomic) GMMClientCapabilities *capabilities; // @synthesize capabilities=_capabilities;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setCachedIconIDs:(long long *)arg1 count:(unsigned int)arg2;
- (long long)cachedIconIDAtIndex:(unsigned int)arg1;
- (void)addCachedIconID:(long long)arg1;
- (void)clearCachedIconIDs;
@property(readonly, nonatomic) long long *cachedIconIDs;
@property(readonly, nonatomic) unsigned int cachedIconIDsCount;
@property(nonatomic) int cachedIconVersion; // @synthesize cachedIconVersion=_cachedIconVersion;
@property(readonly, nonatomic) BOOL hasCapabilities;
- (void)dealloc;

@end

