//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ASCDefaultLockupTheme : NSObject
{
}

+ (id)offerStatusLabelFontForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001bbcc
+ (void)updateOfferStatusLabelColorForView:(id)arg1;	// IMP=0x001000000001bb87
+ (long long)numberOfLinesInSubtitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001bb76
+ (id)subtitleLabelFontForView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001ba66
+ (long long)numberOfLinesInTitleForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001ba55
+ (id)titleLabelFontForView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001b8ff
+ (id)headingLabelFontForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001b868
+ (id)headingLabelColorForView:(id)arg1;	// IMP=0x001000000001b7ff
+ (long long)preferredLabelAlignmentForSize:(id)arg1;	// IMP=0x001000000001b76c
+ (struct CGSize)preferredIconSizeForSize:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x001000000001b70a
+ (id)sharedTheme;	// IMP=0x001000000001b6aa
- (void)applyToLockupContentView:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000001bbf7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b6ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

