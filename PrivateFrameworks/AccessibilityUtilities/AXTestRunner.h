/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AXTestRunner : NSObject
{
    id _preTestAction;
    id _postTestAction;
}

@property(copy, nonatomic) id postTestAction; // @synthesize postTestAction=_postTestAction;
@property(copy, nonatomic) id preTestAction; // @synthesize preTestAction=_preTestAction;
- (void)runTest:(Class)arg1;
- (void)dealloc;

@end
