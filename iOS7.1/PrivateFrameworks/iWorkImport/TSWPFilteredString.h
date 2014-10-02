//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@class TSWPDeletionRangeMap, TSWPRangeArray;

__attribute__((visibility("hidden")))
@interface TSWPFilteredString : NSString
{
    NSString *_sourceString;
    TSWPDeletionRangeMap *_rangeMap;
    unsigned int _length;
    TSWPRangeArray *_sourceRanges;
}

@property(readonly, nonatomic) TSWPRangeArray *sourceRanges; // @synthesize sourceRanges=_sourceRanges;
@property(readonly, nonatomic) unsigned int length; // @synthesize length=_length;
@property(retain, nonatomic) TSWPDeletionRangeMap *rangeMap; // @synthesize rangeMap=_rangeMap;
@property(nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (unsigned int)charIndexMappedFromStorage:(unsigned int)arg1;
- (unsigned int)charIndexMappedToStorage:(unsigned int)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1 subrange:(struct _NSRange)arg2 removeRanges:(id)arg3;

@end
