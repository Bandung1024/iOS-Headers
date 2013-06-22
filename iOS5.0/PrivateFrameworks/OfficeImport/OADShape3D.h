/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class OADBevel, OADColor;

@interface OADShape3D : NSObject <NSCopying>
{
    OADBevel *mTopBevel;
    OADBevel *mBottomBevel;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    OADColor *mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}

+ (id)nullShape3D;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)topBevel;
- (void)setTopBevel:(id)arg1;
- (id)bottomBevel;
- (void)setBottomBevel:(id)arg1;
- (id)extrusionColor;
- (void)setExtrusionColor:(id)arg1;
- (float)extrusionHeight;
- (void)setExtrusionHeight:(float)arg1;
- (id)contourColor;
- (void)setContourColor:(id)arg1;
- (float)contourWidth;
- (void)setContourWidth:(float)arg1;
- (float)shapeDepth;
- (void)setShapeDepth:(float)arg1;
- (int)material;
- (void)setMaterial:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

