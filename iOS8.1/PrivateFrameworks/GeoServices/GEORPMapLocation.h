//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDViewportInfo, NSData;

@interface GEORPMapLocation : PBCodable <NSCopying>
{
    GEOLatLng *_coordinate;
    NSData *_image;
    GEOPDViewportInfo *_viewportInfo;
    float _zoomLevel;
    struct {
        unsigned int zoomLevel:1;
    } _has;
}

@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasViewportInfo;
@property(nonatomic) BOOL hasZoomLevel;
@property(readonly, nonatomic) BOOL hasCoordinate;
@property(readonly, nonatomic) BOOL hasImage;
- (void)dealloc;

@end

