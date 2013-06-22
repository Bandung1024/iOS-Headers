/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSIndexSet, NSString;

@interface SSPurchaseValidationContext : NSObject <NSCopying>
{
    NSIndexSet *_allowedDeviceIdentifiers;
    long long _diskSpaceAvailable;
    id _sizeLimitBlock;
    NSString *_systemName;
    NSString *_systemVersion;
}

@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(copy, nonatomic) id sizeLimitBlock; // @synthesize sizeLimitBlock=_sizeLimitBlock;
@property(nonatomic) long long diskSpaceAvailable; // @synthesize diskSpaceAvailable=_diskSpaceAvailable;
@property(copy, nonatomic) NSIndexSet *allowedDeviceIdentifiers; // @synthesize allowedDeviceIdentifiers=_allowedDeviceIdentifiers;
- (id)_supportedDeviceForOffer:(id)arg1;
- (BOOL)_isAnyIPod;
- (BOOL)_isAnyIPad;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

