/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVWeakReference.h>

@class NSString;

@interface AVGarbageCollectedWeakReference : AVWeakReference
{
    id _referencedObject;
    NSString *_cachedReferencedObjectDescription;
}

- (id)initWithReferencedObject:(id)arg1;
- (id)init;
- (id)description;
- (id)referencedObject;

@end

