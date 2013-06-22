/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPTracing, EDResources, EDWorkbook;

@interface EBState : NSObject
{
    struct XlLinkTable *mXlLinkTable;
    struct XlNameTable *mXlNameTable;
    ChVector_be6372b9 *mSheetNames;
    struct XlFormulaProcessor *mXlFormulaProcessor;
    EDWorkbook *mWorkbook;
    EDResources *mResources;
    id <OCCancelDelegate> mCancelDelegate;
    CPTracing *mTracing;
}

- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (void)dealloc;
- (struct XlLinkTable *)xlLinkTable;
- (struct XlNameTable *)xlNameTable;
- (ChVector_be6372b9 *)sheetNames;
- (struct XlFormulaProcessor *)xlFormulaProcessor;
- (id)workbook;
- (void)setWorkbook:(id)arg1;
- (id)resources;
- (void)setResources:(id)arg1;
- (BOOL)isCancelled;
- (id)tracing;
@property(readonly, nonatomic) id <OCCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=mCancelDelegate;

@end

