/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CALayer.h>

#import "CAPropertyInfo-Protocol.h"

@class CAMeshTransform, NSString;

@interface CALayer (CALayerPrivate) <CAPropertyInfo>
+ (id)properties;
+ (void *)CA_setterForType:(int)arg1;
+ (void *)CA_getterForType:(int)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
- (void)reloadValueForKeyPath:(id)arg1;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (struct CADoublePoint)doublePosition;
- (void)setDoublePosition:(struct CADoublePoint)arg1;
- (struct CADoubleRect)doubleBounds;
- (void)setDoubleBounds:(struct CADoubleRect)arg1;
- (struct CADoublePoint)convertDoublePoint:(struct CADoublePoint)arg1 fromLayer:(id)arg2;
- (struct CADoublePoint)convertDoublePoint:(struct CADoublePoint)arg1 toLayer:(id)arg2;
- (struct CADoubleRect)convertDoubleRect:(struct CADoubleRect)arg1 fromLayer:(id)arg2;
- (struct CADoubleRect)convertDoubleRect:(struct CADoubleRect)arg1 toLayer:(id)arg2;
- (BOOL)_canDisplayConcurrently;
- (BOOL)drawsMipmapLevels;
- (BOOL)hasBeenCommitted;
- (void)clearHasBeenCommitted;
- (id)context;
@property(copy) CAMeshTransform *meshTransform;
- (void)invalidateContents;
- (void)setContentsChanged;
- (void *)regionBeingDrawn;
- (void)_prepareContext:(struct CGContext *)arg1;
- (BOOL)layoutIsActive;
- (void)layoutBelowIfNeeded;
- (BOOL)ignoresHitTesting;
- (BOOL)isDescendantOf:(id)arg1;
- (id)ancestorSharedWithLayer:(id)arg1;
- (struct CGSize)size;
- (id)layerBeingDrawn;
- (id)layerAtTime:(double)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (BOOL)hidden;
- (BOOL)opaque;
- (BOOL)doubleSided;
- (BOOL)isFlipped;
- (void)setFlipped:(BOOL)arg1;
@property BOOL allowsHitTesting;
@property BOOL canDrawConcurrently;
@property BOOL clearsContext;
@property(getter=isFrozen) BOOL frozen;
@property BOOL needsLayoutOnGeometryChange;
@property BOOL sortsSublayers;
@property BOOL invertsShadow;
@property struct CGAffineTransform contentsTransform;
@property BOOL contentsOpaque;
@property BOOL preloadsCache;
@property BOOL allowsDisplayCompositing;
@property struct CGSize sizeRequisition;
@property BOOL acceleratesDrawing;

// Remaining properties
@property(copy) NSString *contentsScaling;
@end

