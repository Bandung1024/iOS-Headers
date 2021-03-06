//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADBannerViewInternalDelegate.h"

@class NSArray, NSMutableArray;

@interface _ADPolicyEngineEvent : NSObject <ADBannerViewInternalDelegate>
{
    CDUnknownBlockType _bannersLoadedHandler;
    NSMutableArray *_banners;
    NSMutableArray *_bannersWaitingOnLoad;
}

@property(retain, nonatomic) NSMutableArray *bannersWaitingOnLoad; // @synthesize bannersWaitingOnLoad=_bannersWaitingOnLoad;
@property(retain, nonatomic) NSMutableArray *banners; // @synthesize banners=_banners;
@property(copy, nonatomic) CDUnknownBlockType bannersLoadedHandler; // @synthesize bannersLoadedHandler=_bannersLoadedHandler;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)_considerCallingLoadedHandler;
- (void)waitForLoadsForBanners:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadedBannerWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *bannerIdentifiers;
- (void)addBannerForCreativeType:(int)arg1;
- (id)init;
- (void)dealloc;

@end

