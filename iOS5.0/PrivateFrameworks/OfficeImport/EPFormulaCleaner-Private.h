/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EPFormulaCleaner.h>

@interface EPFormulaCleaner (Private)
- (void)cleanFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3;
- (_Bool)cleanTokenAtIndex:(unsigned int)arg1 removedTokenCount:(unsigned int *)arg2;
- (void)addOffsetsToRow:(int *)arg1 rowRelative:(_Bool)arg2 column:(int *)arg3 columnRelative:(_Bool)arg4;
- (_Bool)isReferenceValidInLassoForRow:(int)arg1 rowRelative:(_Bool)arg2 column:(int)arg3 columnRelative:(_Bool)arg4;
- (_Bool)isReferenceValidInLassoForSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(_Bool)arg3 rowMax:(int)arg4 rowMaxRelative:(_Bool)arg5 columnMin:(int)arg6 columnMinRelative:(_Bool)arg7 columnMax:(int)arg8 columnMaxRelative:(_Bool)arg9;
- (void)updateSheet:(id)arg1 row:(int)arg2 rowRelative:(_Bool)arg3 column:(int)arg4 columnRelative:(_Bool)arg5;
- (void)updateSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(_Bool)arg3 rowMax:(int)arg4 rowMaxRelative:(_Bool)arg5 columnMin:(int)arg6 columnMinRelative:(_Bool)arg7 columnMax:(int)arg8 columnMaxRelative:(_Bool)arg9;
- (_Bool)cleanArray:(unsigned int)arg1;
- (_Bool)cleanRef:(unsigned int)arg1;
- (_Bool)cleanArea:(unsigned int)arg1;
- (_Bool)cleanRef3D:(unsigned int)arg1;
- (_Bool)cleanArea3D:(unsigned int)arg1;
- (_Bool)cleanName:(unsigned int)arg1;
- (_Bool)cleanNameX:(unsigned int)arg1;
- (_Bool)cleanFunc:(unsigned int)arg1;
- (_Bool)cleanFuncVar:(unsigned int)arg1;
- (_Bool)cleanUnion:(unsigned int)arg1;
- (_Bool)cleanRange:(unsigned int)arg1 removedTokenCount:(unsigned int *)arg2;
- (_Bool)combineCellReferences:(unsigned int)arg1 removedTokenCount:(unsigned int *)arg2;
- (_Bool)isLinkReferenceIndexSupported:(unsigned int)arg1 allowExternal:(_Bool)arg2;
- (id)worksheetFromLinkReferenceIndex:(unsigned int)arg1 loadIfNeeded:(_Bool)arg2;
- (_Bool)cleanName:(unsigned int)arg1 nameIndex:(unsigned int)arg2 sheetIndex:(unsigned int)arg3;
- (_Bool)checkFunctionId:(int)arg1 tokenIndex:(unsigned int)arg2;
- (_Bool)checkSupportedAddInName:(id)arg1 externalLink:(_Bool)arg2;
- (_Bool)checkCustomFunction:(unsigned int)arg1;
- (void)updateWorksheet:(id)arg1 row:(int)arg2 column:(int)arg3 inDictionary:(id)arg4;
- (void)applyMaxCellsInName:(id)arg1;
- (_Bool)useEvaluationStackToCheckFunctionId:(int)arg1 functionName:(id)arg2 tokenIndex:(unsigned int)arg3;
- (unsigned int)useEvaluationStackToGetParameter:(unsigned int)arg1 tokenIndex:(unsigned int)arg2;
- (id)useEvaluationStackToGetParameter:(unsigned int)arg1 tokenIndex:(unsigned int)arg2 allReferencesAllowed:(_Bool)arg3 success:(_Bool *)arg4;
- (id)extractFormulaToCleanFromSharedFormula:(id)arg1;
- (void)reportWarning:(int)arg1;
- (void)reportWarning:(int)arg1 parameter:(id)arg2;
- (void)reset;
@end

