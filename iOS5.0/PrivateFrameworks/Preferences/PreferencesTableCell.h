/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class NSString, PSSpecifier, UIImageView;

@interface PreferencesTableCell : UITableViewCell
{
    id _value;
    UIImageView *_checkedImageView;
    BOOL _checked;
    BOOL _shouldHideTitle;
    NSString *_hiddenTitle;
    int _alignment;
    SEL _pAction;
    id _pTarget;
    BOOL _cellEnabled;
    PSSpecifier *_specifier;
    int _type;
    BOOL _lazyIcon;
    BOOL _lazyIconDontUnload;
    BOOL _lazyIconForceSynchronous;
    NSString *_lazyIconAppID;
}

- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (id)getLazyIcon;
- (id)blankIcon;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (id)getIcon;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setShouldHideTitle:(BOOL)arg1;
- (void)setChecked:(BOOL)arg1;
- (BOOL)isChecked;
- (void)setIcon:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)titleLabel;
- (id)valueLabel;
- (id)iconImageView;
- (void)setAlignment:(int)arg1;
- (void)layoutSubviews;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setCellEnabled:(BOOL)arg1;
- (BOOL)cellEnabled;
- (BOOL)canReload;
- (void)reloadWithSpecifier:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;

@end

