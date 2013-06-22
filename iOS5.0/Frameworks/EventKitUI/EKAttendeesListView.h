/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class EKEvent, NSArray, UIImage;

@interface EKAttendeesListView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    EKEvent *_event;
    NSArray *_attendees;
    id _attendeeDelegate;
    BOOL _shouldShowStatusImages;
    UIImage *_attendingImage;
    UIImage *_maybeImage;
    UIImage *_notAttendingImage;
    UIImage *_pendingImage;
}

- (id)_pendingImage;
- (id)_notAttendingImage;
- (id)_maybeImage;
- (id)_attendingImage;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_imageForStatus:(int)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)loadAttendees;
- (void)eventModified:(id)arg1;
- (void)setAttendeeDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 event:(id)arg2;

@end

