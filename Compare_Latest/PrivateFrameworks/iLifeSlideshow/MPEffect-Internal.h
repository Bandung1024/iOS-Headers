/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPEffect.h>

#import "MPActionableSupportInternal-Protocol.h"

@interface MPEffect (Internal) <MPActionableSupportInternal>
- (id)slideForMCSlide:(id)arg1;
- (id)nearestLayerGroup;
- (_Bool)hasBreaksInDocument:(id)arg1;
- (_Bool)hasMovies;
- (void)scaleMainDuration;
- (_Bool)needsParallelizer;
- (void)setParentContainer:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setPlug:(id)arg1;
- (void)cleanup;
- (void)copyAudioPlaylist:(id)arg1;
- (void)copyAnimationPaths:(id)arg1;
- (void)copyFilters:(id)arg1;
- (void)copyTexts:(id)arg1;
- (void)copySecondarySlides:(id)arg1;
- (void)copySlides:(id)arg1;
- (void)copyVars:(id)arg1;
- (id)nearestPlug;
- (id)parentDocument;
- (id)uuid;
- (id)objectID;
- (id)plugID;
- (void)updateEffectAttributes;
- (id)slideInformationWithDocument:(id)arg1;
- (_Bool)supportsEffectTiming;
- (void)applyFormattedAttributes;
- (id)formattedAttributes;
- (id)_effectAttributes;
- (void)updateTiming;
- (void)setSkipEffectTiming:(_Bool)arg1;
- (_Bool)isLive;
@end
