//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUIndexPathSet.h>

@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet
{
    NSMutableSet *_indexPaths;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)removeAllIndexPaths;
- (void)setIndexPathSet:(id)arg1;
- (BOOL)containsIndexPath:(id)arg1;
- (void)removeIndexPath:(id)arg1;
- (void)addIndexPath:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)enumerateIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (int)count;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end
