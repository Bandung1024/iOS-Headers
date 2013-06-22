/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : NSObject <NSCopying>
{
    AVTimedMetadataGroupInternal *_priv;
}

- (id)init;
- (id)initWithItems:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly) CDStruct_e83c9415 timeRange;
@property(readonly, copy) NSArray *items;

@end

