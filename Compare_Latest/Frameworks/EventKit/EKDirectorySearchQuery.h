//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface EKDirectorySearchQuery : NSObject
{
    BOOL _findGroups;
    BOOL _findLocations;
    BOOL _findResources;
    BOOL _findUsers;
    NSSet *_terms;
    unsigned int _resultLimit;
}

@property(nonatomic) unsigned int resultLimit; // @synthesize resultLimit=_resultLimit;
@property(nonatomic) BOOL findUsers; // @synthesize findUsers=_findUsers;
@property(nonatomic) BOOL findResources; // @synthesize findResources=_findResources;
@property(nonatomic) BOOL findLocations; // @synthesize findLocations=_findLocations;
@property(nonatomic) BOOL findGroups; // @synthesize findGroups=_findGroups;
@property(retain, nonatomic) NSSet *terms; // @synthesize terms=_terms;

@end

