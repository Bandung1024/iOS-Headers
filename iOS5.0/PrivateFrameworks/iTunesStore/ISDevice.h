/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISSingleton-Protocol.h"

@class NSString;

@interface ISDevice : NSObject <ISSingleton>
{
    unsigned int _daemonLaunchCount;
    struct dispatch_queue_s *_dispatchQueue;
    NSString *_guid;
    NSString *_hardwareModel;
    BOOL _pluggedIn;
    int _pluggedInToken;
    NSString *_productVersion;
    int _type;
}

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;
- (void)_setPluggedIn:(BOOL)arg1;
- (void)_schedulePowerAssertionRelease:(id)arg1;
- (BOOL)_releasePowerAssertion:(id)arg1;
- (void)_initDeviceType;
- (BOOL)_isPodcastCapable;
- (BOOL)_isHDVideoCapable;
- (int)_deviceTypeForModelString:(id)arg1;
- (id)_copyCapabilityValueForKey:(struct __CFString *)arg1;
- (void)_cancelScheduledPowerAssertionRelease:(id)arg1;
- (id)supportedOfferDeviceForDevices:(id)arg1;
- (void)daemonWillExitCleanly;
- (void)daemonDidLaunch;
- (unsigned int)daemonLaunchCount;
@property(readonly) int type;
@property(readonly) NSString *systemName;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *productVersion;
@property(readonly, getter=isPluggedIn) BOOL pluggedIn;
- (BOOL)isAnyWildcat;
- (BOOL)isAnyIPod;
- (BOOL)isAnyIPhone;
- (BOOL)hasCapability:(int)arg1;
@property(readonly) NSString *hardwareName;
@property(readonly) NSString *hardwareModel;
@property(readonly) NSString *guid;
@property(readonly) NSString *deviceName;
- (id)copyPurchaseValidationContext;
- (id)copyProtocolConditionalContext;
- (BOOL)checkCapabilities:(id)arg1 withMismatches:(id *)arg2;
- (BOOL)takePowerAssertion:(id)arg1;
- (BOOL)releasePowerAssertion:(id)arg1;
- (void)dealloc;
- (id)init;

@end

