//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSPLazyReferenceArray : NSMutableArray
{
    NSMutableArray *_references;
    unsigned long _mutations;
}

@property(readonly, nonatomic) NSArray *references; // @synthesize references=_references;
- (void).cxx_destruct;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addReference:(id)arg1;
- (void)addObject:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)referenceAtIndex:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)init;

@end
