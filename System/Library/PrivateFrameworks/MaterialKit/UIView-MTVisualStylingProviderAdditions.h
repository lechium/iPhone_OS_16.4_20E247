//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

@interface UIView (MTVisualStylingProviderAdditions)
- (id)visualStylingProviderForCategory:(long long)arg1;	// IMP=0x0020000000007063
- (void)_mt_applyVisualStyling:(id)arg1;	// IMP=0x002000000000cbef
- (void)mt_removeAllVisualStyling;	// IMP=0x002000000000cbb2
- (void)mt_applyVisualStyling:(id)arg1;	// IMP=0x002000000000cab8
- (void)mt_replaceVisualStyling:(id)arg1;	// IMP=0x002000000000ca66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

