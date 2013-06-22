/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MKQuadTrie : NSObject
{
    unsigned int _maxItems;
    CDStruct_8caa76fc _minSize;
    CDStruct_02837cd9 _initialRegion;
    void *__root;
}

- (id).cxx_construct;
- (id)itemDescriptions;
- (id)description;
- (id)breadthFirstDescription;
- (id)depthFirstDescription;
- (void)clearAllItemsPerforming:(id)arg1;
- (id)allItems;
- (unsigned int)count;
- (void)foreach:(id)arg1;
- (id)itemsInMapRect:(CDStruct_02837cd9)arg1;
- (BOOL)contains:(id)arg1;
- (BOOL)remove:(id)arg1;
- (void)insert:(id)arg1;
- (void)dealloc;
- (id)initWithInitialRegion:(CDStruct_02837cd9)arg1 minimumSize:(CDStruct_c3b9c2ee)arg2 maximumItems:(unsigned int)arg3;

@end

