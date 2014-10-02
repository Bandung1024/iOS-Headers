//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSString, UIColor, UIFont;

@interface RCTextLayer : CALayer
{
    struct CGSize _cachedSize;
    unsigned int _cachedSizeHash;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    int _preferredAlignment;
    int _textAlignment;
}

@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) int preferredAlignment; // @synthesize preferredAlignment=_preferredAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)textRectWithAlignment:(int)arg1 inLayoutBounds:(struct CGRect)arg2;
- (struct CGSize)_displaySize;
- (void)sizeToFit;
- (id)_attributes;
- (id)init;

@end
