//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import "NSCopying.h"
#import "TSDTextSelection.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPSelection : TSKSelection <NSCopying, TSDTextSelection>
{
    int _type;
    struct _NSRange _range;
    unsigned int _headChar;
    unsigned int _tailChar;
    BOOL _leadingEdge;
    unsigned int _leadingCharIndex;
    BOOL _validVisualRanges;
    int _styleInsertionBehavior;
    int _caretAffinity;
    struct _NSRange _smartFieldRange;
    struct TSWPRangeVector _visualRanges;
}

+ (BOOL)p_checkEndOfLineFlagForRange:(struct _NSRange *)arg1 leadingEdge:(char *)arg2 type:(int *)arg3 endOfLine:(BOOL)arg4 storage:(id)arg5;
+ (id)selectionWithRange:(struct _NSRange)arg1 type:(int)arg2 leadingEdge:(BOOL)arg3 storage:(id)arg4;
+ (id)selectionWithRange:(struct _NSRange)arg1;
+ (Class)archivedSelectionClass;
@property(readonly, nonatomic) BOOL validVisualRanges; // @synthesize validVisualRanges=_validVisualRanges;
@property(readonly, nonatomic) int caretAffinity; // @synthesize caretAffinity=_caretAffinity;
@property(readonly, nonatomic) int styleInsertionBehavior; // @synthesize styleInsertionBehavior=_styleInsertionBehavior;
@property(readonly, nonatomic) unsigned int leadingCharIndex; // @synthesize leadingCharIndex=_leadingCharIndex;
@property(readonly, nonatomic) BOOL leadingEdge; // @synthesize leadingEdge=_leadingEdge;
@property(nonatomic) unsigned int tailChar; // @synthesize tailChar=_tailChar;
@property(nonatomic) unsigned int headChar; // @synthesize headChar=_headChar;
@property(readonly, nonatomic) struct _NSRange smartFieldRange; // @synthesize smartFieldRange=_smartFieldRange;
@property(readonly, nonatomic) struct _NSRange rawRange; // @synthesize rawRange=_range;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isAtEndOfLine;
- (void)saveToArchive:(struct SelectionArchive *)arg1 archiver:(id)arg2;
- (BOOL)intersectsRange:(struct _NSRange)arg1;
- (BOOL)containsCharacterAtIndex:(unsigned int)arg1 allowRightEdge:(BOOL)arg2;
- (BOOL)containsCharacterAtIndex:(unsigned int)arg1;
- (unsigned int)rightEdge;
- (unsigned int)leftEdge;
- (unsigned int)visualRangeCount;
- (void)setHeadChar:(unsigned int)arg1 tailChar:(unsigned int)arg2;
- (id)visualRangesArray;
- (struct TSWPRangeVector *)i_visualRanges;
- (const struct TSWPRangeVector *)visualRanges;
- (void)i_setVisualRanges:(const struct TSWPRangeVector *)arg1;
- (struct _NSRange)superRange;
- (unsigned int)end;
- (unsigned int)start;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector *)arg1 startChar:(unsigned int)arg2 endChar:(unsigned int)arg3 rightToLeft:(BOOL)arg4 sameLine:(BOOL)arg5;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector *)arg1;
- (id)constrainToRange:(struct _NSRange)arg1;
- (id)copyWithNewRange:(struct _NSRange)arg1;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange)arg1 head:(unsigned int)arg2 tail:(unsigned int)arg3;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange)arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange)arg2;
- (BOOL)isEquivalentForInsertionStyle:(id)arg1;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) BOOL isInsertionPoint;
@property(readonly, nonatomic) BOOL isRange;
@property(readonly, nonatomic) BOOL isVisual;
- (int)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArchive:(const struct SelectionArchive *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(BOOL)arg6 storage:(id)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned int)arg7;
@property(readonly, nonatomic) struct _NSRange range;
- (unsigned int)insertionChar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

