/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject
{
    NSDictionary *_attributes;
}

- (id)stringForKey:(id)arg1;
- (BOOL)getUInt16:(unsigned short *)arg1 forKey:(id)arg2;
- (id)UUIDStringForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)initWithAttributes:(id)arg1;

@end

