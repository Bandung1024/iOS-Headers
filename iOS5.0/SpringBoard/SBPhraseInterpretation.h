/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SBPhraseInterpretation : NSObject
{
    int _weight;
}

- (id)init;
@property(readonly, retain, nonatomic) NSString *text;
- (BOOL)removeSpaceBefore;
- (BOOL)removeSpaceAfter;
- (id)description;
@property(nonatomic) int weight; // @synthesize weight=_weight;

@end

