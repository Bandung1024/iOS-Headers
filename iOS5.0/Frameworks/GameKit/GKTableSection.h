/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKTopCapListTableSection.h>

@class NSArray, NSString;

@interface GKTableSection : GKTopCapListTableSection
{
    NSArray *_visibleItems;
    NSString *_title;
    NSString *_secondaryTitle;
    NSString *_abbreviatedTitle;
    BOOL _usesTopCapTitle;
    int _loadingState;
}

@property(nonatomic) int loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) BOOL usesTopCapTitle; // @synthesize usesTopCapTitle=_usesTopCapTitle;
@property(retain, nonatomic) NSString *abbreviatedTitle; // @synthesize abbreviatedTitle=_abbreviatedTitle;
@property(retain, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *visibleItems; // @synthesize visibleItems=_visibleItems;
- (id)sectionHeaderTitleInTableView:(id)arg1;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (id)currentSectionHeaderAbbreviatedTitleInTableView:(id)arg1;
- (id)currentSectionHeaderSecondaryTitleInTableView:(id)arg1;
- (id)currentSectionHeaderTitleInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (int)sectionHeaderRowCountInTableView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

