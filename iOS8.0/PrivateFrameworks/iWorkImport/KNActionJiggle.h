//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNActionEffectBuildAnimator.h"

@class KNAnimParameterGroup, NSString;

__attribute__((visibility("hidden")))
@interface KNActionJiggle : KNAnimationEffect <KNActionEffectBuildAnimator>
{
    KNAnimParameterGroup *_parameterGroup;
    float singleRotationAnimDuration;
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)applyActionEffect:(id)arg1 toAttributes:(id)arg2;
+ (id)actionEffectStyle;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (BOOL)isEmphasisBuildAnimation;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (id)animationsForTextureSet:(id)arg1 finalTextureSet:(id)arg2 duration:(double)arg3 attributes:(id)arg4 previousAttributes:(id)arg5;
- (void)p_addAnimationsToLayer:(id)arg1 angleLarge:(float)arg2 angleSmall:(float)arg3 xOffsetLarge:(float)arg4 xOffsetSmall:(float)arg5 duration:(double)arg6 jiggleCount:(float)arg7 result:(id)arg8;
- (float)p_jiggleCountFromEffectAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
