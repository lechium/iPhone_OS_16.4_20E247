//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (FIUISizing)
- (struct CGSize)scaleFontAndKerningToFitSize:(struct CGSize)arg1 minimumFontSize:(double)arg2 minimumKerning:(double)arg3 stillDidntFit:(_Bool *)arg4;	// IMP=0x009000000002c050
- (void)scaleToFitWidth:(double)arg1;	// IMP=0x009000000002bfc6
- (double)scaleNumericAttribute:(id)arg1 byAmount:(double)arg2;	// IMP=0x009000000002bd21
- (double)scaleFontSizeByAmount:(double)arg1 minimumFontSize:(double)arg2;	// IMP=0x009000000002baff
@end

