/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyTransform : GLKEffectProperty
{
    union _GLKMatrix4 _modelviewMatrix;
    union _GLKMatrix4 _projectionMatrix;
    union _GLKMatrix3 _normalMatrix;
    union _GLKMatrix4 _invModelviewMatrix;
    union _GLKMatrix4 _mvpMatrix;
    int _mvpMatrixLoc;
    int _modelviewMatrixLoc;
    int _projectionMatrixLoc;
    int _normalMatrixLoc;
    int _invModelviewMatrixLoc;
}

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;
@property(nonatomic) int invModelviewMatrixLoc; // @synthesize invModelviewMatrixLoc=_invModelviewMatrixLoc;
@property(nonatomic) int normalMatrixLoc; // @synthesize normalMatrixLoc=_normalMatrixLoc;
@property(nonatomic) int projectionMatrixLoc; // @synthesize projectionMatrixLoc=_projectionMatrixLoc;
@property(nonatomic) int modelviewMatrixLoc; // @synthesize modelviewMatrixLoc=_modelviewMatrixLoc;
@property(nonatomic) int mvpMatrixLoc; // @synthesize mvpMatrixLoc=_mvpMatrixLoc;
@property(nonatomic) union _GLKMatrix4 mvpMatrix; // @synthesize mvpMatrix=_mvpMatrix;
@property(nonatomic) union _GLKMatrix4 invModelviewMatrix; // @synthesize invModelviewMatrix=_invModelviewMatrix;
@property(nonatomic) union _GLKMatrix4 projectionMatrix; // @synthesize projectionMatrix=_projectionMatrix;
@property(nonatomic) union _GLKMatrix4 modelviewMatrix; // @synthesize modelviewMatrix=_modelviewMatrix;
- (void)dealloc;
- (id)description;
- (void)bind;
@property(readonly, nonatomic) union _GLKMatrix3 normalMatrix; // @synthesize normalMatrix=_normalMatrix;
- (void)setShaderBindings;
- (void)loadMatrix:(int)arg1 matrix:(union _GLKMatrix4)arg2;
- (void)loadIdentity:(int)arg1;
- (void)dirtyAllUniforms;
- (id)init;

@end

