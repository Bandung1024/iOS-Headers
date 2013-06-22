/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    NSMutableArray *m_keys;
}

+ (id)keylist;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=m_keys;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
@property(readonly, nonatomic) unsigned int count;
- (id)description;
- (id)keysWithInteractionType:(id)arg1;
- (id)keyWithName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 keys:(id)arg2;

@end

