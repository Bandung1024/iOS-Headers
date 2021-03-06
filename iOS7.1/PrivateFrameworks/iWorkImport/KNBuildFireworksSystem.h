//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDGLParticleSystem.h>

__attribute__((visibility("hidden")))
@interface KNBuildFireworksSystem : TSDGLParticleSystem
{
    CDStruct_03942939 _startingColorRGB;
    BOOL _didDrawCenterBurst;
    float _lifeSpanMinDuration;
    float _colorRandomness;
    float _maxDistance;
    float _fireworkStartingPositionX;
    CDStruct_083b1a49 _lifeSpan;
    struct CGSize _randomParticleSizeMinMax;
    struct CGPoint _randomParticleSpeedMinMax;
    struct CGPoint _startingPoint;
}

+ (BOOL)willOverrideColors;
+ (BOOL)willOverrideStartingPoints;
@property(readonly, nonatomic) struct CGPoint startingPoint; // @synthesize startingPoint=_startingPoint;
@property(nonatomic) BOOL didDrawCenterBurst; // @synthesize didDrawCenterBurst=_didDrawCenterBurst;
@property(nonatomic) float fireworkStartingPositionX; // @synthesize fireworkStartingPositionX=_fireworkStartingPositionX;
@property(nonatomic) struct CGPoint randomParticleSpeedMinMax; // @synthesize randomParticleSpeedMinMax=_randomParticleSpeedMinMax;
@property(nonatomic) struct CGSize randomParticleSizeMinMax; // @synthesize randomParticleSizeMinMax=_randomParticleSizeMinMax;
@property(nonatomic) float maxDistance; // @synthesize maxDistance=_maxDistance;
@property(nonatomic) CDStruct_b2fbf00d lifeSpan; // @synthesize lifeSpan=_lifeSpan;
@property(nonatomic) float colorRandomness; // @synthesize colorRandomness=_colorRandomness;
@property(nonatomic) float lifeSpanMinDuration; // @synthesize lifeSpanMinDuration=_lifeSpanMinDuration;
- (CDStruct_b2fbf00d)lifeSpanAtIndexPoint:(struct CGPoint)arg1;
- (float)scaleAtIndexPoint:(struct CGPoint)arg1;
- (CDStruct_03942939)speedAtIndexPoint:(struct CGPoint)arg1;
- (float)speedMax;
- (CDStruct_f2e236b6)colorAtIndexPoint:(struct CGPoint)arg1;
- (struct CGPoint)startingPointAtIndexPoint:(struct CGPoint)arg1;
- (void)setupWithTexture:(id)arg1 particleTextureSize:(struct CGSize)arg2 reverseDrawOrder:(BOOL)arg3;

@end

