/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/ODDPoint.h>

@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint
{
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}

- (void)dealloc;
- (void)setType:(int)arg1;
- (id)parent;
- (id)children;
- (void)addChild:(id)arg1 order:(unsigned long)arg2;

@end

