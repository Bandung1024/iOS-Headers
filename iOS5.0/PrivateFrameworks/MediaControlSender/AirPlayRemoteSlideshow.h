/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MediaControlClient;

@interface AirPlayRemoteSlideshow : NSObject
{
    struct dispatch_queue_s *_internalQueue;
    MediaControlClient *_client;
    id <AirPlayRemoteSlideshowDelegate> _delegate;
    struct dispatch_queue_s *_userQueue;
    BOOL _started;
    double _startTime;
}

- (id)init;
- (void)dealloc;
@property(nonatomic) id <AirPlayRemoteSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDispatchQueue:(struct dispatch_queue_s *)arg1;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)_configureEventHandler;
- (void)getFeaturesWithCompletion:(id)arg1;
- (void)startWithOptions:(id)arg1 completion:(id)arg2;
- (void)stopWithOptions:(id)arg1 completion:(id)arg2;

@end

