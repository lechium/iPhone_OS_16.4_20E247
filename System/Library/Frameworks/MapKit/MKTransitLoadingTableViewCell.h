//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKCustomSeparatorCell.h"

@class UIActivityIndicatorView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKTransitLoadingTableViewCell : MKCustomSeparatorCell
{
    _MKUILabel *_loadingLabel;	// 8 = 0x8
    UIActivityIndicatorView *_loadingIndicator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014e246
- (void)stopAnimating;	// IMP=0x000000000014e229
- (void)startAnimating;	// IMP=0x000000000014e20c
- (void)dealloc;	// IMP=0x000000000014e1aa
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000014db4d

@end

