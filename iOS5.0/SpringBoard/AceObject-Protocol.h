/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol AceObject <NSObject, NSCopying, NSMutableCopying>
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)dictionary;
- (id)properties;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@end

