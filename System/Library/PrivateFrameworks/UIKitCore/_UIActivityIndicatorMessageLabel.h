//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorMessageLabel : UILabel
{
    NSDictionary *_regularTextAttributes;	// 144 = 0x90
    NSDictionary *_effectiveTextAttributes;	// 152 = 0x98
}

+ (id)defaultRegularContentSizeTextAttributes;	// IMP=0x0060000000e46334
- (void).cxx_destruct;	// IMP=0x0000000000e46b30
@property(readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes; // @synthesize effectiveTextAttributes=_effectiveTextAttributes;
@property(copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
- (void)_ensureCapableOfCalculatingBaselineOffsets;	// IMP=0x0000000000e46a75
- (id)_validatedAttributedString:(id)arg1;	// IMP=0x0000000000e4699f
- (double)_effectiveVerticalSpacingToSpinner;	// IMP=0x0000000000e46924
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;	// IMP=0x0000000000e4679c
- (void)setEffectiveTextAttributes:(id)arg1;	// IMP=0x0000000000e466ce
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000e46652
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000000e46582
- (void)setText:(id)arg1;	// IMP=0x0000000000e46509
@property(readonly, nonatomic) double verticalSpacingToSpinner;
- (id)initWithRegularTextAttributes:(id)arg1;	// IMP=0x0000000000e46401

@end

