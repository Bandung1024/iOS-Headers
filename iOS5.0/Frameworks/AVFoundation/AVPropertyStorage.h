/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface AVPropertyStorage : NSObject
{
    struct dispatch_queue_s *_storageAccessWorkQueue;
    NSMutableDictionary *_propertyStorage;
}

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1 defaultObjectBlock:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)willAccessKVOForKey:(id)arg1;
- (void)didAccessKVOForKey:(id)arg1;

@end

