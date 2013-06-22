/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EDKeyedObject-Protocol.h"

@class CHDDataLabel, CHDMarker, OADGraphicProperties;

@interface CHDDataValueProperties : NSObject <EDKeyedObject>
{
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned int mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataValueProperties;
- (id)init;
- (id)shallowCopyWithIndex:(int)arg1;
- (void)dealloc;
- (unsigned int)key;
- (id)dataLabel;
- (void)setDataLabel:(id)arg1;
- (unsigned int)dataValueIndex;
- (void)setDataValueIndex:(unsigned int)arg1;
- (id)graphicProperties;
- (void)setGraphicProperties:(id)arg1;
- (id)marker;
- (void)setMarker:(id)arg1;

@end

