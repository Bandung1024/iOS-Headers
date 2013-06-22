/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MFDragSource <NSObject>
- (id)dragInitiatedAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForDraggedItem:(id)arg1;
- (id)viewForDraggedItem:(id)arg1 atScale:(float)arg2;
- (void)dragStartedWithItem:(id)arg1;
- (void)animatePlaceholderForDragFailure:(id)arg1;
- (void)dragCompletedForItem:(id)arg1 success:(BOOL)arg2;
- (id)viewForDragSource;
@end

