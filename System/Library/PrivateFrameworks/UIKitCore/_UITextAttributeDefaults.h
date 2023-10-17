//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSParagraphStyle, NSShadow, NSString, UIColor, UIFont, _UIMutableTextAttributeDictionary, _UITextAttributeDictionary;

__attribute__((visibility("hidden")))
@interface _UITextAttributeDefaults : NSObject
{
    _UIMutableTextAttributeDictionary *_attributes;	// 8 = 0x8
}

+ (id)_unspecifiedDefaults;	// IMP=0x00100000002808e5
+ (id)_defaultsForUserInterfaceIdiom:(long long)arg1;	// IMP=0x00100000002808af
+ (void)_getFontSizesForUserInterfaceIdiom:(long long)arg1 labelFontSize:(double *)arg2 buttonFontSize:(double *)arg3 systemFontSize:(double *)arg4 smallSystemFontSize:(double *)arg5;	// IMP=0x0010000000280f7a
- (void).cxx_destruct;	// IMP=0x0000000000280f6a
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000280e6a
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000280d4f
@property(readonly, copy, nonatomic) _UITextAttributeDictionary *_attributes;
@property(retain, nonatomic, setter=_setShadow:) NSShadow *_shadow;
@property(retain, nonatomic, setter=_setParagraphStyle:) NSParagraphStyle *_paragraphStyle;
@property(retain, nonatomic, setter=_setFont:) UIFont *_font;
@property(retain, nonatomic, setter=_setTextColor:) UIColor *_textColor;
- (id)_initWithFallback:(id)arg1;	// IMP=0x00000000002809a7
- (id)_init;	// IMP=0x0000000000280951

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
