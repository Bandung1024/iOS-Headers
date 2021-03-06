//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class TSTCellStyle, TSTFormulaPredicate, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleRule : NSObject <NSCopying>
{
    TSTFormulaPredicate *mPredicate;
    TSWPParagraphStyle *mTextStyle;
    TSTCellStyle *mCellStyle;
    int _predicateType;
}

+ (id)conditionalStyleRuleWithRule:(id)arg1;
@property(readonly, nonatomic) int predicateType; // @synthesize predicateType=_predicateType;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(CDStruct_0441cfb5)arg3;
- (id)copyByRemappingFormulaIDsWithMap:(struct __CFDictionary *)arg1 calcEngine:(id)arg2 error:(char *)arg3;
- (id)description;
- (BOOL)evaluateFormulaAtCellID:(CDStruct_0441cfb5)arg1 withCalcEngine:(id)arg2 withFormulaTableID:(struct __CFUUID *)arg3;
@property(readonly, nonatomic) struct TSCEFormula *formula;
@property(readonly, nonatomic) TSTFormulaPredicate *predicate;
@property(readonly, nonatomic) TSWPParagraphStyle *textStyle;
@property(readonly, nonatomic) TSTCellStyle *cellStyle;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3;

@end

