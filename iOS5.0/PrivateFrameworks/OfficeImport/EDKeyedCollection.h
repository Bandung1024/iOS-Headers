/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDCollection.h>

@class TSUPointerKeyDictionary;

@interface EDKeyedCollection : EDCollection
{
    TSUPointerKeyDictionary *mMap;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeAllObjects;
- (id)objectWithKey:(int)arg1;

@end

