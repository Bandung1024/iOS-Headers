/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AVQueueFeeder : NSObject
{
}

- (id)init;
- (unsigned int)numberOfPaths;
- (unsigned int)itemCount;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange)arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange)arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (double)bookmarkTimeForIndex:(unsigned int)arg1;

@end

