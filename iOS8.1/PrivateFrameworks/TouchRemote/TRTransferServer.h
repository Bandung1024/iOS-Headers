//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface TRTransferServer : NSObject
{
    CDStruct_86971917 *_aesContext;
    BOOL _didSendData;
    struct AirPlayPairingSessionPrivate *_pairingSession;
    int _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    id <TRTransferServerDelegate> _delegate;
}

@property(nonatomic) __weak id <TRTransferServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long)arg2 outputData:(id *)arg3;
- (long)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long)arg2 outputData:(id *)arg3;
- (id)_onQueue_didReceiveEncryptedData:(id)arg1;
- (void)_onQueue_didFinishPairing;
- (void)_beginAdvertisingIfPowered;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

