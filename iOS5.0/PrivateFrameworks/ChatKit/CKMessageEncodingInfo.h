/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableString;

@interface CKMessageEncodingInfo : NSObject
{
    NSMutableString *_mutableText;
    BOOL _isTextOnly;
    BOOL _infoCalculated;
    int _characterCountNumerator;
    int _characterCountDenominator;
}

- (id)initWithContentsOfComposition:(id)arg1;
- (void)dealloc;
@property(nonatomic) int characterCountNumerator; // @synthesize characterCountNumerator=_characterCountNumerator;
@property(nonatomic) int characterCountDenominator; // @synthesize characterCountDenominator=_characterCountDenominator;
- (void)calculateInfo;
- (void)_calculateInfoIfNecessary;
- (void)updateByReloadingFromComposition:(id)arg1 replacementRange:(struct _NSRange)arg2 replacementText:(id)arg3;
@property(nonatomic) BOOL isTextOnly; // @synthesize isTextOnly=_isTextOnly;
@property(nonatomic) BOOL infoCalculated; // @synthesize infoCalculated=_infoCalculated;

@end

