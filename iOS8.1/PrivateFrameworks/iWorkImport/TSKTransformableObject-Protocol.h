//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSKCommand, TSPObjectContext, TSUPointerKeyDictionary;

@protocol TSKTransformableObject <NSObject>
- (TSKCommand *)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(TSPObjectContext *)arg2 transformedObjects:(TSUPointerKeyDictionary *)arg3 inBounds:(struct CGRect)arg4;
@end

